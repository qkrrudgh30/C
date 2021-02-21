#include <stdio.h>
#include <stdarg.h>

int add_ints(const size_t va_size, ...);

int main(void)
{
    int res;

    res = add_ints(1, 8);
    printf("res: %d\n", res);

    res = add_ints(5, 1, 2, 3, 4, 5);
    printf("res: %d\n", res);
    

    return 0;
}

int add_ints(const size_t va_count, ...)
{
    va_list ap;
    int sum;
    size_t i;

    sum = 0;
    va_start(ap, va_count);
    {
        for (i = 0; i < va_count; ++i) {
            sum += va_arg(ap, int);
        }
    }
    va_end(ap);

    return sum;
}

