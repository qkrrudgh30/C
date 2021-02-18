#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

int main(void)
{
    struct date today;

    printf("today: %d/%d/%d\n", today.year, today.month, today.day);

    return 0;
}



