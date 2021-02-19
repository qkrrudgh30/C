#include <stdio.h>

enum { NAME_LEN = 32 };    /* #define 대신 enum을 많이 씁니다. 그 이유는 C++에서 배우게 됩니다. */

struct name {
    char firstname[NAME_LEN];
    char lastname[NAME_LEN];
};
typedef struct name name_t;


void sizeof_array(char name_2d[][NAME_LEN], name_t names);

int main(void)
{
    char my_name1[2][NAME_LEN];
    name_t my_name2;

    printf("sizeof(my_name1): %zu\n", sizeof(my_name1));
    printf("sizeof(my_name2): %zu\n", sizeof(my_name2));

    sizeof_array(my_name1, my_name2);

    return 0;
}

void sizeof_array(char name_2d[][NAME_LEN], name_t name_struct)
{
    printf("sizeof(name_2d): %zu\n", sizeof(name_2d));
    printf("sizeof(name_struct): %zu\n", sizeof(name_struct));

    return;
}


