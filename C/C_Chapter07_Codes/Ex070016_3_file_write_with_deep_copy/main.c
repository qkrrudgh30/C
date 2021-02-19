#include <stdio.h>

enum {
    NAME_LENGTH = 32,
    PEOPLE_NUM = 2
};

typedef struct name {
    char firstname[NAME_LENGTH];
    char lastname[NAME_LENGTH];
} name_t;

int main(void)
{
    FILE* stream;
    size_t read_num;
    size_t i;
    name_t names[PEOPLE_NUM];

    stream = fopen("names.txt", "rb");
    if (!stream) {
        perror("error while opening");
        return 1;
    }

    read_num = fread(names, sizeof(names[0]), PEOPLE_NUM, stream);
    for (i = 0; i < read_num; ++i) {
        printf("%s %s\n", names[i].firstname, names[i].lastname);
    }

    if (fclose(stream) != 0) {
        perror("error while closing");
        return 2;
    }

    return 0;
}



