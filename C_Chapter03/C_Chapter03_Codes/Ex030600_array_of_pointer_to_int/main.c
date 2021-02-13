#include <stdio.h>
#include "print_array.h"

#define LENGTH (3)

int main(void)
{
    size_t lengths[LENGTH] = { 3, 2, 5};
    int* array_of_pointer_to_int[LENGTH];
    int nums1[3] = { 0, 1, 2};
    int nums2[2] = { 0, 1}; 
    int nums3[5] = { 0, 1, 2, 3, 4};

    array_of_pointer_to_int[0] = nums1;
    array_of_pointer_to_int[1] = nums2;
    array_of_pointer_to_int[2] = nums3;

    print_array(LENGTH, lengths, array_of_pointer_to_int);

    return 0;
}

