#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

enum {
    NAME_LENGTH = 1024
};

typedef struct {
    char firstname[NAME_LENGTH];
    char lastname[NAME_LENGTH];
    unsigned int id;
    float score;
} student_info_t;

int main(void)
{
    FILE* file;
    size_t read_count, students_count;
    student_info_t* students;

    file = fopen("test.txt", "rb");
    if (!file) {
        perror("error while opening");
        return 1;
    }

    read_count = fread(&students_count, sizeof(size_t), 1, file);

    students = (student_info_t*)malloc(students_count * sizeof(student_info_t));

    read_count = fread(students, sizeof(student_info_t), students_count, file);

    /* 원하는 작업 수행 */

    free(students);
    students = NULL;

    if (fclose(file) != 0) {
        perror("error while closing");
        return 2;
    }   

    return 0;
}




