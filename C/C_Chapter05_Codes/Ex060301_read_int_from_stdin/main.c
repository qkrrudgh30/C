#include <stdio.h>

int main(void)
{
    int num;

    printf("[scanf()]Enter a number: ");
    scanf("%d", &num);
    printf("num: %d\n", num);

    printf("[fscanf()]Enter a number: ");
    fscanf(stdin, "%d", &num);
    printf("num: %d\n", num);

    return 0;
}



