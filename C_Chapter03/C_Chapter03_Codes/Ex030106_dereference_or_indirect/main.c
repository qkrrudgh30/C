#include <stdio.h>
#include "update_value.h"

int main(void)
{
    int strength = 85000;
    int* ptr_to_strength = &strength;

    printf("before the update.\n");
    printf("%p: %d\n", (void*)ptr_to_strength, strength);

    update_value(ptr_to_strength);

    printf("after the update.\n");
    printf("%p: %d\n", (void*)ptr_to_strength, strength);


    return 0;
}

