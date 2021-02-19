#include <stdio.h>
#include <assert.h>

typedef enum {
    OP_INTADD,
    OP_DOUBLEADD
} op_t;

typedef union {
    int ivalue;
    double dvalue;
} value_t;

value_t calculate(value_t lhs, value_t rhs, op_t op);

int main(void)
{
    value_t op1;
    value_t op2;
    value_t res;

    op1.ivalue = 55;
    op2.ivalue = 27;
    res = calculate(op1, op2, OP_INTADD);
    printf("%d + %d = %d\n", op1.ivalue, op2.ivalue, res.ivalue);

    op1.dvalue = 12.123;
    op2.dvalue = 34.345;
    res = calculate(op1, op2, OP_DOUBLEADD);
    printf("%f + %f = %f\n", op1.dvalue, op2.dvalue, res.dvalue);

    printf("sizeof(res): %zu\n", sizeof(res));
    
    return 0;
}

value_t calculate(value_t lhs, value_t rhs, op_t op)
{
    value_t res;

    if (op == OP_INTADD) {
        res.ivalue = lhs.ivalue + rhs.ivalue;
    } else if (op == OP_DOUBLEADD) {
        res.dvalue = lhs.dvalue + rhs.dvalue;
    } else {
        assert(0);
    }

    return res;
}

