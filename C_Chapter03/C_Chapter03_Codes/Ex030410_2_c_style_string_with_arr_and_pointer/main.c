#include <stdio.h>

int main(void)
{
    char today1[] = "Friday";    /* 이 경우 마지막에 '\0'가 자동으로 대입되며, 스택 메모리에 저장됩니다. */ 
    char* today2 = "Friday";     /* 이 경우 마지막에 '\0'는 대입되지 않으며, 데이터 섹션에 저장됩니다. */ 
    today1[0] = 'P';               /* compile. */ 
    today2[0] = 'p';               /* undefined behavior. 읽기전용 문자열이기 때문입니다. */ 

    return 0;
}

