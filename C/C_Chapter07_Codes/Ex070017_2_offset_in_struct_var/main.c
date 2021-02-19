#include <stdio.h>

enum {
    NAME_LENGTH = 32,
    PEOPLE_NUM = 2
};

typedef struct name {
    char firstname[NAME_LENGTH];
    char lastname[NAME_LENGTH];
} name_t;

struct user_info {
    unsigned int id;
    name_t name;
    unsigned short height;
    float weight;
    unsigned short age;
};
typedef struct user_info user_info_t;

int main(void)
{
    user_info_t my_info;

    int offset_id = (char*)&my_info.name - (char*)&my_info.id;
    int offset_name = (char*)&my_info.height - (char*)&my_info.name;
    int offset_height = (char*)&my_info.weight - (char*)&my_info.height;
    int offset_weight = (char*)&my_info.age - (char*)&my_info.weight;
    int offset_age = sizeof(my_info) - (offset_id + offset_name + offset_height + offset_weight);

    printf("offset_id: %d\n", offset_id);
    printf("offset_name: %d\n", offset_name);
    printf("offset_height: %d\n", offset_height);
    printf("offset_weight: %d\n", offset_weight);
    printf("offset_weight: %d\n", offset_age);



    return 0;
}



