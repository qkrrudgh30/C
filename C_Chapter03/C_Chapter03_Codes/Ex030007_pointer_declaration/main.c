#include <stdio.h>

int main(void)
{
    int num = 10;
    int* num_address = &num;
    printf("%p: %d\n", (void*)num_address, num);

    return 0;
}

