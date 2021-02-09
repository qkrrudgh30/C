#include <stdio.h>

enum { LENGTH = 5 };

int main(void)
{
    int* ptr1;
    int* ptr2;
    int array1[LENGTH];
    int array2[LENGTH];
    int x = 7;

    ptr1 = array1;
    /* this does not compile. */
    array1 = ptr1;

    ptr1 = &x;
    /* this does not compile. */
    array1 = &x;

    ptr1 = ptr2;
    /* this does not compile. */
    array1 = array2;

    ++ptr1;
    --ptr1;

    ptr1 += 1;
    ptr1 -= 2;

    /* this does not compile. */
    ++array1;
    --array2;

    array1 += 1;
    array2 -= 1;

    return 0;
}

