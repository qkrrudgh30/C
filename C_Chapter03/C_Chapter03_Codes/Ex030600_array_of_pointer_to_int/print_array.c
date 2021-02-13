#include <stdio.h>
#include <assert.h>
#include "print_array.h"

void print_array(const size_t len, const size_t lengths[], int* const data[])
{
    size_t i;
    size_t j;
    const int* temp_ptr;

    for (i = 0; i < len; ++i) {
        temp_ptr = data[i];
        printf("data[%d]: ", i);

        for (j = 0; j < lengths[i]; ++j) {
            printf("%d ", temp_ptr[j]);
        }
        
        printf("\n");
    }

}



