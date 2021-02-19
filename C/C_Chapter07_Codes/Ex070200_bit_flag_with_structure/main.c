#include <stdio.h>

struct bitflags {
    unsigned char b0: 1;
    unsigned char b1: 1;
    unsigned char b2: 1;
    unsigned char b3: 1;
    unsigned char b4: 1;
    unsigned char b5: 1;
    unsigned char b6: 1;
    unsigned char b7: 1;
};
typedef struct bitflags bitflags_t;

int main(void)
{
    bitflags_t flags = { 0, };

    printf("sizeof(flags): %zu\n", sizeof(flags));
    
    printf("%#X\n", *((char*)&flags));
    
    flags.b3 = 1;

    printf("%#X\n", *((char*)&flags));

    flags.b0 = 1;

    printf("%#X\n", *((char*)&flags));    

    return 0;
}



