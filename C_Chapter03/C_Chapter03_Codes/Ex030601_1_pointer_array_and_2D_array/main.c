#include <stdio.h>

#define LENGTH (3)

void do_something(const size_t len, int* array[LENGTH]);

int main(void)
{
    int array[LENGTH][LENGTH] = {
        { 0, 1, 2},
        { 3, 4, 5},
        { 6, 7, 8}
    };

    do_something(LENGTH, array);

    return 0;
}

void do_something(const size_t len, int* array[LENGTH])
{
    printf("do_something has been called.\n");

    return;
}
