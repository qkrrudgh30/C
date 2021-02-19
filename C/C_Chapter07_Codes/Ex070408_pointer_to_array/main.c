#include <stdio.h>

int main(void)
{
    int scores[3] = { 78, 82, 93 };
    int(*ptr1_to_array)[3] = &scores;
    /* this does not compile. */
    int(*ptr2_to_array)[5] = &scores;

    return 0;
}



