#include <stdio.h>

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    int* const const_ptr_to_int = &num1;

    /* this does not compile. */
    /*const_ptr_to_int = &num2;*/
    /*++const_ptr_to_int;*/

    return 0;
}

