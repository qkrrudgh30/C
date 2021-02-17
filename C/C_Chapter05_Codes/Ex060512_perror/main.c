#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void)
{
    char filename[] = "notHere.txt";
    FILE* stream = fopen(filename, "rb");

    if (!stream) {
        perror("error while opening");
        return 1;
    }

    if (fclose(stream) != 0) {
        perror("error while closing");
        return 2;
    }

    return 0;
}



