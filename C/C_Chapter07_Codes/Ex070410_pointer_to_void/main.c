#include <stdio.h>

int main(void)
{
    float pi = 3.14f, res;
    void* p;
    float* q;

    p = &pi;
    q = p;

    /* this does not compile */
    /*printf("%f\n", *p);*/
    printf("%f\n", *(float*)p);

    /* this does not compile */
    /*res = *p + *q;*/
    res = *(float*)p + *q;
    printf("%f\n", res);

    return 0;
}



