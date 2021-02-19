#include <stdio.h>

typedef struct {
    unsigned char b0: 1;
    unsigned char b1: 1;
    unsigned char b2: 1;
    unsigned char b3: 1;
    unsigned char b4: 1;
    unsigned char b5: 1;
    unsigned char b6: 1;
    unsigned char b7: 1;
} bitflags_t;

int main(void)
{
    char* ptr_to_flags;
    int is_all_clear;
    int is_all_set;
    bitflags_t flags = { 0, };

    ptr_to_flags = (char*)&flags;

    is_all_clear = (*ptr_to_flags == 0);
    printf("is_all_clear: %d\n", is_all_clear);

    is_all_set = (*ptr_to_flags == 0xFF);
    printf("is_all_set: %d\n", is_all_set);    

    return 0;
}



