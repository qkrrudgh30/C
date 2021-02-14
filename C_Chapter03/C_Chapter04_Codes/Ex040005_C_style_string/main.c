#include <stdio.h>
#include <string.h>

#define LENGTH (12)

int main(void)
{
    char string1[] = "Hello world!";
    char string2[LENGTH] = "Goodbye~!";

    /* Q. 아래 출력의 결과를 예상해 보세요. */
    printf("string1 size: %zu\n", sizeof(string1));
    printf("string1 length: %d\n", strlen(string1));

    printf("string2 size: %zu\n", sizeof(string2));
    printf("string2 length: %d\n", strlen(string2));

    return 0;
}

