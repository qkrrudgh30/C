#include <stdio.h>
#include <string.h>

enum {
    NAME_LENGTH = 30
};

typedef struct {
    char firstname[NAME_LENGTH];
    char lastname[NAME_LENGTH];
    unsigned int id;
} student_info_t;

int main(void)
{
    int res;
    student_info_t s1 = { "Lulu", "Kim", 12345};
    student_info_t s2 = { "Teemo", "Park", 12349};
    student_info_t s3 = { "Lulu", "Choi", 12350};
    student_info_t s4 = { "Teemo", "Park", 12340};

    res = memcmp(&s1, &s2, sizeof(student_info_t));
    printf("memcmp(&s1, &s2, sizeof(student_info_t)): %d\n", res);

    res = memcmp(&s1, &s3, sizeof(student_info_t));
    printf("memcmp(&s1, &s3, sizeof(student_info_t)): %d\n", res);

    res = memcmp(&s2, &s4, sizeof(student_info_t));
    printf("memcmp(&s2, &s4, sizeof(student_info_t)): %d\n", res);

    return 0;
}



