#include <stdio.h>
#include "memory.h"

int main(void)
{
    int nums1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int nums2[5] = { 0, 1, 2, 3, 4};
    int* nums3 = nums1 + 2;
    const size_t NUM3_LENGTH = 5u;
    char* res = NULL;

    res = is_overlap(ARRAY_LENGTH(nums1), nums1, ARRAY_LENGTH(nums2), nums2) ? "Yes" : "No";
    printf("Are nums1 and nums2 overlapped? %s\n", res);

    res = is_overlap(ARRAY_LENGTH(nums1), nums1, NUM3_LENGTH, nums3) ? "Yes" : "No";
    printf("Are nums1 and nums3 overlapped? %s\n", res);

    return 0;
}

