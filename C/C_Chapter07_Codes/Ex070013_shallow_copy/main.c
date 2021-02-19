#include <stdio.h>

struct name {
    char* lastname;
    char* firstname;
};
typedef struct name name_t;

int main(void)
{
    char firstname[] = "Park";
    char lastname[] = "Code";

    name_t name;
    name_t cloned_name;

    name.firstname = firstname;
    name.lastname = lastname;

    cloned_name = name;
    name.firstname[0] = 'R';

    /* Q. 아래 두 printf() 함수가 출력하는 내용을 추측해 보세요. */
    printf("name: %s %s\n", name.firstname, name.lastname);
    printf("cloned_name: %s %s\n", cloned_name.firstname, cloned_name.lastname);

    return 0;
}



