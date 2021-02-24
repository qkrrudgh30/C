#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* ap_nums1;
    int* ap_nums2;
    char* temp_ptr;
    size_t i, offset = 40;

    ap_nums1 = (int*)malloc(0x0B);    /* 크기가 12인 동적 메모리 할당 */
    ap_nums2 = (int*)malloc(0x17);    /* 크기가 23인 동적 메모리 할당 */

    temp_ptr = (char*)ap_nums1;
    for (i = 0; i < offset; ++i) {
        printf("%p: %hhX\n", (void*)(temp_ptr - i), *(temp_ptr - i));
    }
    printf("\n\n");
    temp_ptr = (char*)ap_nums2;
    for (i = 0; i < offset; ++i) {
        printf("%p: %hhX\n", (void*)(temp_ptr - i), *(temp_ptr - i));
    }

    free(ap_nums1);
    ap_nums1 = NULL;
    free(ap_nums2);
    ap_nums2 = NULL;

    return 0;
}



