#include <stdio.h>

#define TRUE (1)

int main(void)
{
    int num;
    int sum = 0;

    while (TRUE) {
        if (scanf("%d", &num) == 0) {
            printf("Error!\n");
            continue;
        }

        if (num == 0) {
            break;
        }

        sum += num;
    }

    printf("sum: %d\n", sum);

    return 0;
}



