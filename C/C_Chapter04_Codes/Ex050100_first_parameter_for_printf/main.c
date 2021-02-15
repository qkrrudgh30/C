#include <stdio.h>

int main(void)
{
    int score = 100;
    char ch = 'G';
    float pi = 3.141f;
    const char* name = "hill\n";

    printf("Hello, world!\n");
    printf(name);
    /* 컴파일 되지 않습니다.
    printf(score);
    printf(ch);
    printf(pi);
    */

    printf("Hello, world!\n");
    printf("%s is %d\n", "my score", 100);
    printf("my initial is %c%c%c\n", 'p', 'k', 'h');
    printf("pi is %f\n", 3.141595f);

    return 0;
}

