#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%*d%d", &num);
    printf("num: %d\n", num);

    return 0;
}



