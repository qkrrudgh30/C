#include <stdio.h>
#include "square.h"

int main(void)
{
    /* Q. 코드에서 잘못된 부분을 찾고, 할 수 있는 만큼 개선해 보세요. */
    const int* four_squared;

    four_squared = square(4);
    printf("%d", *four_squared);

    return 0;
}



