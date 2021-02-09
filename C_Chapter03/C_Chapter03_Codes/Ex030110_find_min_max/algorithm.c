#include <stdio.h>
#include <assert.h>
#include "algorithm.h"

/* pre-condition: len >= 1 */
void get_min_max(const size_t len, const int arr[], int* ptr_to_min, int* ptr_to_max)
{
    size_t i;

    assert(len >= 1);

    *ptr_to_min = arr[0];
    *ptr_to_max = arr[0];

    for (i = 1; i < len; ++i) {
        if (arr[i] < *ptr_to_min) {
            *ptr_to_min = arr[i];
        }

        if (*ptr_to_max < arr[i]) {
            *ptr_to_max = arr[i];
        }
    }


    return;
}



