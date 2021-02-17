#include <stdio.h>

#define LENGTH (32)

int main(void)
{
    char data[LENGTH];
    FILE* stream;

    stream = fopen("hello.txt", "rb");
    if (stream == NULL){
        fprintf(stderr, "error while opening: %s\n", "hello.txt");
        return 1;
    }

    if (fgets(data, LENGTH, stream) != NULL) {
        printf("%s", data);
    }

    if (fclose(stream) != 0) {
        fprintf(stderr, "error while closing");
    }

    return 0;
}

