#include <stdio.h>
#include <assert.h>
#include "print_pointer_size.h"

void print_pointer_size(int* arr)
{
    char ch = 'h';
    int number = 2147483647;
    float pi = 3.141595f;

    char* ptr_to_ch = &ch;
    int* ptr_to_number = &number;
    float* ptr_to_pi = &pi;

    printf("size of pointer to an char: %d\tsize of char: %d\n", sizeof(ptr_to_ch), sizeof(ch));
    printf("size of pointer to an int: %d\tsize of int: %d\n", sizeof(ptr_to_number), sizeof(number));
    printf("size of pointer to an float: %d\tsize of float: %d\n\n", sizeof(ptr_to_pi), sizeof(pi));

    printf("size of pointer to array of int: %d\n", sizeof(arr));

    return;
}



