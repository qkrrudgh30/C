#include <stdio.h>

enum {
    NAME_LENGTH = 32,
    PEOPLE_NUM = 2
};

typedef struct {
    char firstname[NAME_LENGTH];
    char lastname[NAME_LENGTH];
} name_t;


/* #pragma pack을 사용하면 되기도 합니다. 표준은 아닙니다. 좋은 컴파일러들이 지원해주는 기능입니다. */
#pragma pack(push, 1)
struct user_info {
    unsigned int id;
    name_t name;
    unsigned short height;
    float weight;
    unsigned short age;
};
typedef struct user_info user_info_t;
#pragma pack(pop)

int main(void)
{
    user_info_t my_info;

    printf("sizeof(my_info): %zu\n", sizeof(my_info));

    return 0;
}



