#include <stdio.h>

#define LENGTH (10)

int main(void)
{
    FILE* stream;
    int scores[LENGTH] = { 12, 34, 56, 78, 90};

    stream = fopen("hello.txt", "wb");

    fwrite(scores, sizeof(scores[0]), LENGTH, stream);    /* fwrite()가 실행 되어도, hello.txt는 비어있습니다. */
    fflush(stream);                                       /* fflush()가 실행되어서야 비로소 hello.txt에 적힙니다. */

    fclose(stream);

    return 0;
}



