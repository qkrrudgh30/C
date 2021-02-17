#include <stdio.h>

#define LINE_LENGTH (5)

void print_input(void);

int main(void)
{
    printf("before calling print_intput.\n");
    print_input();
    printf("after calling print_input.\n");


    return 0;
}

void print_input(void)
{
    char line[LINE_LENGTH];

    gets(line);
    puts(line);

    return;
}



