#include <stdio.h>
#include <stdarg.h>

enum { NUMBER_COUNT = 5 };

struct numbers {
    int num;
    double f_num;
};
typedef struct numbers numbers_t;

numbers_t get_sum(const size_t va_count, ...);

int main(void)
{
    numbers_t nums[NUMBER_COUNT];
    numbers_t res;
    size_t i;

    for (i = 0; i < NUMBER_COUNT; ++i) {
        nums[i].num = ((int)i) * 2;
        nums[i].f_num = ((double)i) * 3.14;
    }

    res = get_sum(NUMBER_COUNT, nums[0], nums[1], nums[2], nums[3], nums[4]);

    printf("res_int_sum: %d\tres_double_sum: %f\n", res.num, res.f_num);

    return 0;
}

numbers_t get_sum(const size_t va_count, ...)
{
    va_list ap;
    numbers_t temp, sum = { 0, };
    size_t i;

    va_start(ap, va_count);
    {
        for (i = 0; i < va_count; ++i) {
            temp = va_arg(ap, numbers_t);
            sum.num += temp.num;
            sum.f_num += temp.f_num;
        }
    }
    va_end(ap);

    return sum;
}



