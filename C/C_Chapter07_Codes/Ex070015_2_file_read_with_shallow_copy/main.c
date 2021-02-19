#include <stdio.h>

#define NUM_NAMES (2)

typedef struct {
    char* firstname;
    char* lastname;
} name_t;

int main(void)
{
    FILE* stream;
    size_t read_num;
    size_t i;
    name_t names[NUM_NAMES];

    stream = fopen("names.txt", "rb");
    if (!stream) {
        perror("error while opening");
        return 1;
    }

    read_num = fread(names, sizeof(names[0]), NUM_NAMES, stream);
    for (i = 0; i < read_num; ++i) {
        printf("%p %p\n", (void*)(names[i].firstname), (void*)(names[i].lastname));
    }
    /*
    for (i = 0; i < read_num; ++i) {
        printf("%s %s\n", names[i].firstname, names[i].lastname);
    }
    */

    if (fclose(stream) != 0) {
        perror("error while closing");
        return 2;
    }

    return 0;
}



