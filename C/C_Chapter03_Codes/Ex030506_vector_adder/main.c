#include <stdio.h>
#include "vector.h"

int main(void)
{
    const int v1[VECTOR_LENGTH] = { 1, 2, 3};
    const int v2[VECTOR_LENGTH] = { 4, 5, 6};
    int res_vec[VECTOR_LENGTH];

    add_vec(v1, v2, res_vec);

    printf("res_vec: %d\t%d\t%d\n", res_vec[0], res_vec[1], res_vec[2]);

    return 0;
}

