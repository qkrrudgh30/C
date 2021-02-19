#include <stdio.h>

enum {
    NAME_LENGTH = 32,
    PEOPLE_NUM = 2
};

struct name {
    char firstname[NAME_LENGTH];
    char lastname[NAME_LENGTH];
};
typedef struct name name_t;

typedef struct user_info {
    unsigned int id;
    name_t name;
    unsigned short height;
    unsigned short age;      /* 이렇게 자리를 바꾸는 것만으로도 패딩을 줄일 수 있습니다. */
    float weight;
} user_info_t;

int main(void)
{
    user_info_t my_info;

    printf("sizeof(my_info): %zu\n", sizeof(my_info));

    return 0;
}
