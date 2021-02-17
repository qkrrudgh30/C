#include <stdio.h>

#define TRUE (1)
#define LINE_LENGTH (5)

int main(void)
{
    char line[LINE_LENGTH];
    char word[LINE_LENGTH];

    while (TRUE) {
        if (fgets(line, LINE_LENGTH, stdin) == NULL) {
            clearerr(stdin);
            break;
        }

        if (sscanf(line, "%s", word) == 1) {
            printf("%s\n", word);
        }
    }

    return 0;
}



