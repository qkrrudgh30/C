#include <stdio.h>
#include <stdarg.h>

double get_sum(const size_t va_count, ...);

int main(void)
{
    double sum = 0;

    sum = get_sum(2, 1374389535, 1074339512);    /* 정수형 값을 줬는데, double로 읽음. */

    printf("sum: %f\n", sum);

    return 0;
}

double get_sum(const size_t va_count, ...)
{
    va_list ap;
    size_t i;
    double sum = 0;

    va_start(ap, va_count);
    {
        for (i = 0; i < va_count; ++i) {
            sum += va_arg(ap, double);
        }
    }
    va_end(ap);


    return sum;
}

