#include <stdio.h>
#include <string.h>

int main(void)
{
    char msg[] = "Hello, world! good to see you!";
    const char* msg_in_data_section = "Hello, world! good to see you!";    
    /* msg_in_data_section은 strstr() 함수에 전달되어선 안됩니다. */
    char* result;

    result = strstr(msg, "int");
    /* Q. 다음 코드에서 문제점은 무엇일까요?
    printf("result: %s\n", result);
    */

    result = strstr(msg, "int");
    result = result == NULL ? "NULL" : result;
    printf("result: %s\n", result);


    result = strstr(msg, "good");
    result = result == NULL ? "NULL" : result;
    printf("result: %s\n", result);


    return 0;
}

