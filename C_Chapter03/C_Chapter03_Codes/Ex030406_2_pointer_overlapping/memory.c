#include <stdio.h>
#include <assert.h>
#include "memory.h"

int is_overlap(const size_t arr1_len, int* arr1, const size_t arr2_len, int* arr2)
{


    return (arr1 <= arr2 ? arr2 < arr1 + arr1_len : arr1 < arr2 + arr2_len );
}



