#include <stdio.h>

#define TRUE (1)
#define LENGTH (32)

int main(void)
{
    FILE* stream;
    char data[LENGTH];

    stream = fopen("hello.txt", "ab");

    if (fgets(data, LENGTH, stdin) != NULL) {
        fwrite(data, strlen(data), 1, stream);
    }

    fclose(stream);

    return 0;
}


