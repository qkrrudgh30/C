#include <stdio.h>

enum {
    NAME_LENGTH = 32,
    PEOPLE_NUM = 2
};

typedef struct {
    char firstname[NAME_LENGTH];
    char lastname[NAME_LENGTH];
} name_t;

struct user_info {
    unsigned int id;        /* 4byte */
    name_t name;            /* 64byte */
    unsigned short height;  /* 2byte */
    float weight;           /* 4byte */
    unsigned short age;     /* 2byte. total: 76byte*/
};
typedef struct user_info user_info_t;

int main(void)
{
    user_info_t my_info;

    my_info.id = 2013;
    strncpy(my_info.name.firstname, "Park", NAME_LENGTH);
    my_info.name.firstname[NAME_LENGTH - 1] = '\0';
    strncpy(my_info.name.lastname, "Code", NAME_LENGTH);
    my_info.name.lastname[NAME_LENGTH - 1] = '\0';
    my_info.height = 183;
    my_info.weight = 70;
    my_info.age = 29;

    printf("sizeof(my_info): %zu\n", sizeof(my_info));

    return 0;
}

