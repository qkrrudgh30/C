#include <stdio.h>
#include <assert.h>

unsigned int deposit(unsigned int deposit_amount);

int main(void)
{
    int my_deposite = deposit(50000u);

    printf("my_deposite: %u$\n", my_deposite);

    return 0;
}


/* precondition: deposit_amount > 0 */
unsigned int deposit(unsigned int deposit_amount)
{
    unsigned int before_amount = 120000u;
    unsigned int after_amount;

    assert(deposit_amount > 0);
    /* 선조건 검사 */

    after_amount = before_amount + deposit_amount;

    assert(before_amount < after_amount);
    /* 후조건 검사 && Overflow 검사 */

    return after_amount;
}


