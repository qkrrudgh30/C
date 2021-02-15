#include <stdio.h>
#include <string.h>

#define LENGTH (20)

int main(void)
{
    char string1[LENGTH] = "Hello, ";
    char string2[LENGTH / 2] = "Hello, ";
    const char* string3 = "world!";

    printf("sizeof(string1): %zu\n", sizeof(string1));
    printf("sizeof(string2): %zu\n", sizeof(string2));
    printf("sizeof(string3): %zu\n", sizeof(string3));

    printf("strcat(string1, string3): %s\n", strcat(string1, string3));
    printf("strcat(string2, string3): %s\n", strcat(string2, string3));


    return 0;
}


