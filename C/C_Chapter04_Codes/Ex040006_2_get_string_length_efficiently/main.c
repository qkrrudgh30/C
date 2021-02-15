#include <stdio.h>

size_t get_string_length(const char data[]);

int main(void)
{
    char string[] = "I got a feeling!";
    size_t length;

    length = get_string_length(string);

    printf("string length: %zu\n", length);


    return 0;
}

size_t get_string_length(const char data[])
{
    const char* temp_ptr = data;

    while (*temp_ptr++ != '\0') {
    }

    return (size_t)(temp_ptr - data - 1);
}
