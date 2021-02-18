#include <stdio.h>

#define FILE_LENGTH (32)

int main(void)
{
    FILE* stream;
    char filename[] = "output.txt";

    stream = fopen(filename, "wb");
    if (!stream) {
        perror("error while opening");
        return 1;
    }

    if (fgets(filename, FILE_LENGTH, stdin) == NULL) {
        fprintf(stderr, "no input\n");
        return 2;
    }

    if (fclose(stream) != 0) {
        perror("error while closing");
        return 3;
    }

    return 0;
}



