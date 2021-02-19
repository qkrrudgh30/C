#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "error_handler.h"

#define TRUE (1)
#define FALSE (0)

int run(void);
void simple_stderr_print(const char* msg);

int main(void)
{
    int success;

    success = run();

    register_error_handler(default_error_handler);
    if (run() == FALSE) {
        success = FALSE;
    }

    
    register_error_handler(simple_stderr_print);
    if (run() == FALSE) {
        success = FALSE;
    }

    return success ? 0 : 1;
}

int run(void)
{
    int numerator;
    int denominator;

    while (TRUE) {
        printf("Enter numerator: ");
        if (scanf("%d", &numerator) == 1) {
            break;
        }
    }

    while (TRUE) {
        printf("Enter denominator: ");
        if (scanf("%d", &denominator) == 1) {
            break;
        }
    }

    if (denominator == 0) {
        log_error("Cannot divide by zero.");
        return FALSE;
    }

    printf("%d / %d = %.2f\n", numerator, denominator, numerator / (float)denominator);

    return TRUE;
}

void simple_stderr_print(const char* msg)
{
    fputs(msg, stderr);

    return;
}


