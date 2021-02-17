#include <stdio.h>

#define LINE_LENGTH (32)

int main(void)
{
    char line[LINE_LENGTH];

    while (gets(line) != NULL) {    /* NULL 대신 0을 적어야 정상 작동 */
        puts(line);
    }

    return 0;
}



