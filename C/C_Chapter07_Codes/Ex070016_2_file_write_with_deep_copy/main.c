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

int main(void)
{
    name_t names[PEOPLE_NUM];
    FILE* stream;

    strncpy(names[0].firstname, "Park", NAME_LENGTH);
    names[0].firstname[NAME_LENGTH - 1] = '\0';
    strncpy(names[0].lastname, "Code", NAME_LENGTH);
    names[0].lastname[NAME_LENGTH - 1] = '\0';
    strncpy(names[1].firstname, "Bang", NAME_LENGTH);
    names[1].firstname[NAME_LENGTH - 1] = '\0';
    strncpy(names[1].lastname, "Tang", NAME_LENGTH);
    names[1].lastname[NAME_LENGTH - 1] = '\0';

    stream = fopen("names.txt", "wb");
    if (!stream) {
        perror("error while opening");
        return 1;
    }

    fwrite(names, sizeof(names[0]), PEOPLE_NUM, stream);
    fflush(stream);

    if (fclose(stream) != 0) {
        perror("error while closing");
        return 2;
    }

    return 0;
}



