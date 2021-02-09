#include <stdio.h>

int main(void)
{
    char ch1 = 'L';
    char ch2 = 'O';
    char* pointer_to_an_char = &ch1;

    printf("%p: %c\n", (void*)pointer_to_an_char, *pointer_to_an_char);

    pointer_to_an_char = &ch2;
    printf("%p: %c\n", (void*)pointer_to_an_char, *pointer_to_an_char);

    pointer_to_an_char = &ch1;
    printf("%p: %c\n", (void*)pointer_to_an_char, *pointer_to_an_char);
    

    return 0;
}

