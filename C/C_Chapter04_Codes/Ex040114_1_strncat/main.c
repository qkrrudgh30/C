#include <stdio.h>
#include <string.h>

#define LENGTH (20)
#define HALF_LENGTH (10)

int main(void)
{
    char dest1[LENGTH] = "Hello, ";
    char dest2[HALF_LENGTH] = "Hello, ";
    const char* src = "world!";

    printf("strncat(dest1, src, LENGTH - strlen(dest1) - 1): %s\n", strncat(dest1, src, LENGTH - strlen(dest1) - 1));
    printf("strncat(dest2, src, HALF_LENGTH - strlen(dest2) - 1): %s\n", strncat(dest2, src, HALF_LENGTH - strlen(dest2) - 1));

    return 0;
}

