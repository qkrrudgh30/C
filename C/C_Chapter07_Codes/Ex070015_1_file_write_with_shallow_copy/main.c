#include <stdio.h>

#define NUM_NAMES (2)

typedef struct name {
    char* firstname;
    char* lastname;
} name_t;

int main(void)
{
    name_t names[NUM_NAMES];
    FILE* stream;

    names[0].firstname = "Park";
    names[0].lastname = "Code";
    names[1].firstname = "Bang";
    names[1].lastname = "Lang";

    stream = fopen("names.txt", "wb");
    if (!stream) {
        perror("error while opening");
        return 1;
    }

    fwrite(names, sizeof(names[0]), NUM_NAMES, stream);
    fflush(stream);

    if (fclose(stream) != 0) {
        perror("error while closing");
        return 2;
    }

    return 0;
}



