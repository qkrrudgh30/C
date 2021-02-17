#include <stdio.h>
#include <errno.h>

int main(void)
{
    FILE* stream = fopen("fileNotHere.txt", "rb");
    if (!stream) {
        fprintf(stderr, "[%d] error while opening %s\n", errno, "fileNotHere.txt");

        return 1;
    }

    if (fclose(stream) != 0) {
        fprintf(stderr, "[%d] error while closing %s\n", errno, "fileNotHere.txt");
    }

    return 0;
}



