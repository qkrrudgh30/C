#include <stdio.h>

#define TRUE (1)
#define LENGTH (6)

int main(void)
{
    FILE* stream;
    char data[LENGTH];

    stream = fopen("hello.txt", "rb");

    while (TRUE) {
        if (fgets(data, LENGTH, stream) == NULL) {
            break;
        }
        printf("file_position:%3ld\t%s\n", ftell(stream), data);    
        /* ftell() 함수는 현재 파일 위치 표시자를 반환합니다. 이후에 배웁니다. */
        /* 지금은 파일 위치 표시자가 계속 움직인다는 것에 집중 해 주시면 됩니다. */
    }

    fclose(stream);

    return 0;
}



