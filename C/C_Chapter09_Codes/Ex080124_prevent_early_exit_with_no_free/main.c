#include <stdio.h>
#include <stdlib.h>

void do_something(void);

int main(void)
{
    do_something();

    return 0;
}

void do_something(void)
{
    void* ptr_to_void = malloc(10);

    /* 1000줄의 코드 ... */

    if (ptr_to_void != NULL) {
        goto free_and_exit;
    }
    
    /* 1000줄의 코드 ... */

    free_and_exit:
        free(ptr_to_void);
        return;
}

