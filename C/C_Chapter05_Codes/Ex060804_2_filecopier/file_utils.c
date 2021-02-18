#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "file_utils.h"

void file_copier(const char* src, const char* dest)
{
    FILE* src_file;
    FILE* dest_file;
    int c;

    src_file = fopen(src, "rb");
    if (!src_file) {
        perror("error while opening the source file");
        return;
    }

    dest_file = fopen(dest, "wb");
    if (!dest_file) {
        perror("error while opening the destination file");
        goto close_source;
    }

    c = fgetc(src_file);
    while (c != EOF) {
        fputc(c, dest_file);
        c = fgetc(src_file);
    }

    if (fclose(dest_file) != 0) {
        perror("error while closing the destination file");
        return;
    }

    close_source:
        if (fclose(src_file) != 0) {
            perror("error while closing the source file");
        }

    return;
}



