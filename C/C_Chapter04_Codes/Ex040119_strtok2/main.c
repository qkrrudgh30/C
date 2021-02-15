#include <stdio.h>
#include <string.h>

int main(void)
{
    char msg[] = "I love programming. what about you?";
    const char* delims = "o? ";

    char* token = strtok(msg, delims);
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delims);
    }

    return 0;
}

