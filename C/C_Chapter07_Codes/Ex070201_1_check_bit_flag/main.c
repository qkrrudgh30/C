#include <stdio.h>

typedef struct bitflag {
    unsigned char b0: 1;
    unsigned char b1: 1;
    unsigned char b2: 1;
    unsigned char b3: 1;
    unsigned char b4: 1;
    unsigned char b5: 1;
    unsigned char b6: 1;
    unsigned char b7: 1;
} bitflag_t;

int main(void)
{
    bitflag_t flags = { 0, 1, 1, 0, };
    int is_set_b2 = (flags.b2 == 1);
    int is_same = (flags.b1 == flags.b7);

    /* this does not compile. */
    /*int is_all_set = (flags == 0xFF);*/
    /*int is_all_clear = (flags == 0);*/

    return 0;
}



