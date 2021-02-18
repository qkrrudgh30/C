#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};
typedef struct date date_t;

void increase_month(date_t* ptr_to_date_t);

int main(void)
{
    date_t zero_day = { 0, };
    date_t* ptr_to_zero_day = &zero_day;

    printf("zero_day: %d/%d/%d\n", zero_day.year, zero_day.month, zero_day.year);
    increase_month(ptr_to_zero_day);
    printf("increase_month has been called.\n");
    printf("zero_day: %d/%d/%d\n", zero_day.year, zero_day.month, zero_day.year);

    return 0;
}

void increase_month(date_t* ptr_to_date_t)
{
    ++(*ptr_to_date_t).month;
    /* 연산자 우선 순위 때문에 괄호를 꼭 해주셔야 합니다. .연산자가 *연산자보다 우위에 있습니다. */

    return;
}

