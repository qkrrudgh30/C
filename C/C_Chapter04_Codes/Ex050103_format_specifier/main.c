#include <stdio.h>

int main(void)
{
    size_t my_percent = 99;
    size_t* ptr_to_size_t = &my_percent;

    printf("%d%%\n", my_percent);
    printf("%u\n", -17);    /* %u에 부호 있는 수를 넣을 경우, 해당 수의 비트패턴에 해당하는 부호 없는 수가 출력됩니다. */
    
    /* Q. 왜 %o만 있고, %O는 없을까요? */

    printf("%p\n", (void*)ptr_to_size_t);
    /* 모든 메모리 주소의 크기는 4byte로 같다고 했으니, 임의의 포인터를 void*로 캐스팅해도 상관없습니다. */
    /* void*는 추후에 자세히 배우게 됩니다. */

    return 0;
}

