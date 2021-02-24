#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* firstname;
    char* lastname;
} student_info_t;

int main(void)
{
    student_info_t s1 = { "Hello", "Kim"};
    student_info_t cloned_s1;
    size_t size;

    size = strlen(s1.firstname) + 1;
    cloned_s1.firstname = (char*)malloc(size);
    if (cloned_s1.firstname == NULL) {
        fprintf(stderr, "%s\n", "out of memory");
        return 1;
    }
    memcpy(cloned_s1.firstname, s1.firstname, size);

    size = strlen(s1.lastname) + 1;
    cloned_s1.lastname = (char*)malloc(size);
    if (cloned_s1.lastname == NULL) {
        fprintf(stderr, "%s\n", "out of memory");
        return 2;
    }
    memcpy(cloned_s1.lastname, s1.lastname, size);

    /* 원하는 작업 */

    free(cloned_s1.firstname);
    cloned_s1.firstname = NULL;
    free(cloned_s1.lastname);
    cloned_s1.lastname = NULL;

    return 0;
}



