#include <stdio.h>

#define LENGTH (1024)

int main(void)
{
    char filename[] = "hello.txt";
    FILE* stream;
    int data[LENGTH];
    int result;
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

    result = fseek(stream, -1 * sizeof(data[0]), SEEK_SET);
    printf("\nfseek(stream, -1 * sizeof(data[0]), SEEK_SET) has been called.\n");
    if (result != 0) {
        perror("error while seeking");
        fclose(stream);
        return 2;
    }

    num_read = fread(data, sizeof(data[0]), LENGTH, stream);
    for (i = 0; i < num_read; ++i) {
        printf("%d ", data[i]);
    }


    if (fclose(stream) != 0) {
        perror("error while closing");
        return 3;
    }

    return 0;
}



