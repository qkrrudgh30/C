#include <stdio.h>

struct date { int year; int month; int day; };

void run_format(struct date format_date);

int main(void)
{
    struct date today;

    today.year = 2021;
    today.month = 7;
    today.day = 7;

    run_format(today);

    return 0;
}

void run_format(struct date format_date)
{
    printf("run format %d/%d/%d", format_date.year, format_date.month, format_date.day);

    return;
}

