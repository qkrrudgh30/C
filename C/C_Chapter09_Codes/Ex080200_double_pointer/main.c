#include <stdio.h>

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    int* p = &num1;
    int* q = &num2;
    int* r = &num1;
    int** pp;

    /*
        &num1: 0x100
        &num2: 0x104
        &p   : 0x108
        &q   : 0x10C
        &r   : 0x110
        &pp  : 0x114
    */

    pp = &p;
    *pp = q;
    **pp = 1024;
    pp = &r;
    **pp = *p * 2;

    /*
        Q. 위의 코드가 실행 되고 난 후에 변수들의 값은 어떻게 될까요?
        num1: 
        num2:
        p   :
        q   :
        r   :
        pp  :
    
    */

    return 0;
}



