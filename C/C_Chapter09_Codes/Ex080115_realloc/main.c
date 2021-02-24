#include <stdio.h>
#include <stdlib.h>

enum {
    COUNT = 5
};

int main(void)
{
    int* ap_nums;
    int* ap_temp_nums;

    ap_nums = malloc(COUNT * sizeof(int));

    ap_temp_nums = realloc(ap_nums, COUNT * sizeof(int));
    if (ap_temp_nums != NULL) {
        ap_nums = ap_temp_nums;
    }

    /* 원하는 작업 */

    free(ap_nums);
    ap_nums = NULL;

    return 0;
}



