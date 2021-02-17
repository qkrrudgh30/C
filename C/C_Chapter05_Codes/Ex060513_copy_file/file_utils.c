#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "file_utils.h"

#define TRUE (1)

void copy_file(const char* dest, const char* src)
{
    FILE* dest_file;
    FILE* src_file;
    int c;

    src_file = fopen(src, "rb");
    if (!src_file) {
        perror("error while opening source file");
        return;
    }

    dest_file = fopen(dest, "wb");
    if (!dest_file) {
        perror("error while opening destination file");
        goto close_source;
    }

    c = fgetc(src_file);
    while (c != EOF) {
        fputc(c, dest_file);
        c = fgetc(src_file);
    }


    if (fclose(dest_file) == EOF) {
        perror("error while closing destination file");
        return;
    }


    close_source:
        if (fclose(src_file) == EOF) {
            perror("error while closing source file");
            return;
        }

    return;
}



