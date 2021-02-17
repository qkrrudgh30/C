#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void)
{
    char filename[] = "notHere.txt";
    FILE* stream = fopen(filename, "rb");

    if (!stream) {
        fprintf(stderr, "%s - %s\n", filename, strerror(errno));
        return 1;
    }
    
    if (fclose(stream) != 0) {
        fprintf(stderr, "%s - %s\n", filename, strerror(errno));
        return 2;
    }

    return 0;
}



