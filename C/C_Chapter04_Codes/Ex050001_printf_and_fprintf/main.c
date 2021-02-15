#include <stdio.h>

int main(void)
{
    const char* msg = "Hello, world!\n";

    /* 아래 두 줄은 같은 결과의 코드입니다. */
    printf("%s", msg);
    fprintf(stdout, "%s", msg);

    return 0;
}

