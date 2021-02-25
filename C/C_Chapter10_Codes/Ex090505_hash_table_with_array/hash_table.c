#include <stdio.h>
#include <limits.h>

enum { FALSE = 0, TRUE = 1 };
enum { BUCKET_SIZE = 23 };

static int s_nums[BUCKET_SIZE];

void init_hashtable(void)
{
    size_t i;

    for (i = 0; i < BUCKET_SIZE; ++i) {
        s_nums[i] = INT_MIN;
    }

    return;
}

int is_in_hashtable(int value)
{
    int i;
    int start_index;

    start_index = value % BUCKET_SIZE;
    if (start_index < 0) {
        start_index += BUCKET_SIZE;
    }

    i = start_index;

    do {
        if (s_nums[i] == value) {
            return TRUE;
        } else if (s_nums[i] == INT_MIN) {
            return FALSE;
        }

        i = (i + 1) % BUCKET_SIZE;

    } while (i != start_index);

    return FALSE;
}

int insert_into(int value)
{
    int i;
    int start_index;

    start_index = value % BUCKET_SIZE;
    if (start_index < 0) {
        start_index += BUCKET_SIZE;
    }

    i = start_index;

    do {
        if (s_nums[i] == value || s_nums[i] == INT_MIN) {
            s_nums[i] = value;

            return TRUE;
        }

        i = (i + 1) % BUCKET_SIZE;

    } while (i != start_index);

    return FALSE;
}


