#include <stdio.h>

int main(void)
{
    char ch = 'C';
    char* pointer_to_an_char = &ch;
    short num1 = 10;
    short* pointer_to_an_short = &num1;
    int num2 = 11;
    int* pointer_to_an_int = &num2;
    float f1 = 3.14;
    float* pointer_to_an_float = &f1;
    double f2 = 3.141592;
    double* pointer_to_an_double = &f2;

    printf("%p: %c(%d)\n", (void*)pointer_to_an_char, ch, ch);
    printf("%p: %d\n", (void*)pointer_to_an_short, num1);
    printf("%p: %d\n", (void*)pointer_to_an_int, num2);
    printf("%p: %f\n", (void*)pointer_to_an_float, f1);
    printf("%p: %f\n", (void*)pointer_to_an_double, f2);


    return 0;
}

