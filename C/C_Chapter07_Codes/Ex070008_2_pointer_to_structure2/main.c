#include <stdio.h>

typedef struct date {
    int year;
    int month;
    int day;
} date_t;

void increase_year_and_day(date_t* ptr_to_date_t);

int main(void)
{
    date_t zero_day = { 0, };
    date_t* ptr_to_zero_day = &zero_day;

    printf("zero_day: %d/%d/%d\n", zero_day.year, zero_day.month, zero_day.day);

    increase_year_and_day(ptr_to_zero_day);
    printf("increase_year_and_day() has been called.\n");

    printf("zero_day: %d/%d/%d\n", zero_day.year, zero_day.month, zero_day.day);


    return 0;
}

void increase_year_and_day(date_t* ptr_to_date_t)
{
    (*ptr_to_date_t).year++;
    ptr_to_date_t->day++;

    return;
}
