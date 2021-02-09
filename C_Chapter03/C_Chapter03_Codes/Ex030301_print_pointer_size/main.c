#include <stdio.h>
#include "print_pointer_size.h"

int main(void)
{
    int arr[1024] = { 0, };

    print_pointer_size(arr);

    return 0;
}

