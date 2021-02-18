#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};
typedef struct date date_t;

enum { COUNT = 3 };

int main(void)
{
    date_t anniversaries[COUNT];
    size_t i, gap;

    anniversaries[0].year = 2000;
    anniversaries[0].month = 1;
    anniversaries[0].day = 1;

    anniversaries[1].year = 2010;
    anniversaries[1].month = 10;
    anniversaries[1].day = 10;
    
    anniversaries[2].year = 2020;
    anniversaries[2].month = 20;
    anniversaries[2].day = 20;

    for (i = 0; i < COUNT; ++i) {
        printf("anniversaries[%zu]: %d/%d/%d\n", i, anniversaries[i].year, 
                                                anniversaries[i].month, anniversaries[i].day);
    }
    
    printf("sizeof(anniversaries[0]): %zu\n", sizeof(anniversaries[0]));

    gap = (char*)&anniversaries[1] - (char*)&anniversaries[0];
    printf("gap: %zu\n", gap);
    

    return 0;
}



