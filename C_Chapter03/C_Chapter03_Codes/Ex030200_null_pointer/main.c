#include <stdio.h>

int main(void)
{
    int* ptr = NULL;

    if (ptr == NULL) {
        printf("ptr is the \"NULL pointer\"\n");
    }
    
    if (ptr != NULL) {
        printf("ptr is not the \"NULL pointer\"\n");
    }

    /* 간혹 다음과 같이 쓰기도 합니다. */
    if (ptr) {
        printf("ptr is not the \"NULL pointer\"\n");
    }

    /* 올바르지 않은 예 */
    if (ptr != 0) {
        printf("ptr is not the \"NULL pointer\"\n");
    }

    return 0;
}

