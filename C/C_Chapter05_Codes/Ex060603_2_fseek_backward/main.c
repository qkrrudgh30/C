#include <stdio.h>

#define LENGTH (32)

int main(void)
{
    FILE* stream;
    char filename[] = "hello.txt";
    int data[LENGTH];
    size_t i, num_read;

    stream = fopen(filename, "rb");
    if (!stream) {
        perror("error while opening");
        return 1;
    }

    num_read = fread(data, sizeof(data[0]), LENGTH, stream);
    for (i = 0; i < num_read; ++i) {
        printf("%d ", data[i]);
    }

    fseek(stream, 3 * sizeof(data[0]), SEEK_SET);
    printf("\nfseek(stream, 3 * sizeof(data[0]), SEEK_SET) has been called.\n");
    num_read = fread(data, sizeof(data[0]), LENGTH, stream);
    for (i = 0; i < num_read; ++i) {
        printf("%d ", data[i]);
    }

    fseek(stream, -1 * sizeof(data[0]), SEEK_CUR);
    printf("\nfseek(stream, -1 * sizeof(data[0]), SEEK_CUR) has been called.\n");
    num_read = fread(data, sizeof(data[0]), LENGTH, stream);
    for (i = 0; i < num_read; ++i) {
        printf("%d ", data[i]);
    }


    if (fclose(stream) != 0) {
        perror("error while closing");
        return 2;
    }



    return 0;
}




