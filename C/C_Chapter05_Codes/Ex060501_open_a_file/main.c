#include <stdio.h>

#define LENGTH (32)

int main(void)
{
    char data[LENGTH];
    FILE* stream;

    stream = fopen("hello.txt", "r");

    if (fgets(data, LENGTH, stream) != NULL) {
        printf("%s\n", data);
    }

    fclose(stream);    /* 아직 배우진 않았으나, 파일을 닫는 함수입니다. */

    return 0;
}




