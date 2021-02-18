#include <stdio.h>

typedef struct {
    int year;
    int month;
    int day;
} date_t;

void increase_year(date_t date);

int main(void)
{
    date_t today;

    today.year = 2021;
    today.month = 7;
    today.day = 7;

    printf("today: %d/%d/%d\n", today.year, today.month, today.day);
    increase_year(today);
    printf("increase_year() has been called.\n");
    printf("today: %d/%d/%d\n", today.year, today.month, today.day);


    return 0;
}

void increase_year(date_t date)
{
    ++date.year;

    return;
}

