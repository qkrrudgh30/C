#include <stdio.h>

int main(void)
{
    int num = 12;

    printf("[%d]\n", num);
    printf("[%5d]\n", num);
    printf("[%-5d]\n", num);
    printf("[%05d]\n", num);
    printf("[%-05d]\n", num);
    printf("[%+d]\n", num);
    printf("[%+5d]\n", num);
    printf("[%+05d]\n", num);
    printf("[% d]\n", num);
    printf("[% 5d]\n", num);
    printf("[% 05d]\n", num);
    printf("[%+ 05d]\n", num);

    printf("%#o\n", num);
    printf("%#x\n", num);
    printf("%#X\n", num);
    /* compile warning */
    printf("% #o\n", num);
    printf("%5#o\n", num);
    printf("%+#o\n", num);
    printf("%-#o\n", num);

    return 0;
}

