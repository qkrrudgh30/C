#include <stdio.h>

#define LENGTH (5)

int main(void)
{
    int scores[LENGTH] = { 12, 34, 56, 78, 90};
    FILE* stream;

    stream = fopen("hello.txt", "wb");

    fwrite(scores, sizeof(scores[0]), LENGTH, stream);

    fclose(stream);

    return 0;
}

