#include <stdio.h>

typedef struct {
    int year;
    int month;
    int day;
} date_t;

int main(void)
{
    date_t today;
    /* this does not compile */
    /* struct date expired_date; */

    return 0;
}



