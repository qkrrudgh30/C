#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "buffered_print.h"

#define BUFFER_LENGTH (32)

static size_t s_buffer_index = 0u;
static char s_buffer[BUFFER_LENGTH];

void buffered_print(const char* src)
{
    size_t num_left;
    const char* temp_ptr = src;

    num_left = strlen(src);

    while (num_left > 0) {
        size_t copy_count = BUFFER_LENGTH - s_buffer_index - 1;
        const int buffer_empty = s_buffer_index == 0;

        if (num_left < copy_count) {
            copy_count = num_left;
        }

        s_buffer_index += copy_count;
        num_left -= copy_count;

        if (buffer_empty) {
            strncpy(s_buffer, temp_ptr, copy_count);
            s_buffer[s_buffer_index] = '\0';
        } else {
            strncat(s_buffer, temp_ptr, copy_count);
        }

        temp_ptr += copy_count;

        if (s_buffer_index == BUFFER_LENGTH - 1) {
            printf("%s\n", s_buffer);
            s_buffer_index = 0;
        }
    }
}



