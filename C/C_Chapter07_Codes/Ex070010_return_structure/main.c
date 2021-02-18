#include <stdio.h>

typedef struct {
    int year;
    int month;
    int day;
} date_t;

date_t get_today(void);

int main(void)
{
    date_t today = { 0, };

    printf("today: %d/%d/%d\n", today.year, today.month, today.day);
    today = get_today();
    printf("get_today() has been called.\n");
    
    printf("today: %d/%d/%d\n", today.year, today.month, today.day);



    return 0;
}

date_t get_today(void)
{
    date_t date;

    date.year = 2020;
    date.month = 7;
    date.day = 7;

    return date;
}

