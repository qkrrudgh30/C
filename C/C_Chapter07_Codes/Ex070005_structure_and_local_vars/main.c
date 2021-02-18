#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};
typedef struct date date_t;

void function_with_local_vars(void);
void function_with_structure(void);

int main(void)
{
    

    return 0;
}

void function_with_local_vars(void)
{
    int day;
    int month;
    int year;

    year = 2021;
    month = 7;
    day = 7;

    return;
}

void function_with_structure(void)
{
    date_t today;

    today.year = 2021;
    today.month = 7;
    today.day = 7;

    return;
}
