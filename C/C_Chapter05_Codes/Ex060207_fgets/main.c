#include <stdio.h>

#define LINE_LENGTH (10)

int main(void)
{
    char line[LINE_LENGTH];

    while (fgets(line, LINE_LENGTH, stdin) != NULL) {
        printf("%s", line);
    }

    return 0;
}



