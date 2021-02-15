#include <stdio.h>
#include <string.h>

#define LENGTH (3)

int main(void)
{
    size_t length;
    char str1[] = { 'a', 'b', 'c'};
    char str2[LENGTH]; 

    str2[0] = 'd';
    str2[1] = 'e';
    str2[2] = 'f';

    length = strlen(str1);
    printf("str1 length: %zu\n", length);

    length = strlen(str2);
    printf("str2 length: %zu\n", length);

    return 0;
}

