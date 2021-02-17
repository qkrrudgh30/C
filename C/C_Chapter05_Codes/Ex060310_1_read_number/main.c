#include <stdio.h>

#define LINE_LENGTH (1024)
#define TRUE (1)

int main(void)
{
    int sum = 0;
    int num;
    char line[LINE_LENGTH];

    while (TRUE) {
        if (fgets(line, LINE_LENGTH, stdin) == NULL) {
            clearerr(stdin);
            break;
        }

        if (sscanf(line, "%d", &num) == 1) {
            sum += num;
        }
    }

    printf("sum: %d\n", sum);

    return 0;
}



