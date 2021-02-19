#include <stdio.h>

typedef union {
    unsigned char flags_val;
    struct {
        unsigned char b0: 1;
        unsigned char b1: 1;
        unsigned char b2: 1;
        unsigned char b3: 1;
        unsigned char b4: 1;
        unsigned char b5: 1;
        unsigned char b6: 1;
        unsigned char b7: 1;
    } bits;
} bitflags_t;

int main(void)
{
    int is_all_set;
    int is_all_clear;
    bitflags_t flags = { 0, };

    flags.bits.b1 = 1;
    flags.bits.b3 = 1;

    is_all_set = (flags.flags_val == 0xFF);
    is_all_clear = (flags.flags_val == 0);

    printf("is_all_set: %d\n", is_all_set);
    printf("is_all_clear: %d\n", is_all_clear);

    return 0;
}

