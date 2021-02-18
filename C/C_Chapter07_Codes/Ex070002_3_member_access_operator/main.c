#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

int main(void)
{
    struct date today;

    today.year = 2021;

    printf("today.year: %d\n", today.year);

    return 0;
}



