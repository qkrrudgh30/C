#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum {
    TRUE = 1,
    FALSE = 0,
    STUDENTS_COUNT = 20,
    NAME_LENGTH = 1024,
    INCREMENT = 2
};

typedef struct {
    char firstname[NAME_LENGTH];
    char lastname[NAME_LENGTH];
    unsigned int id;
    float score;
} student_info_t;

student_info_t read_student(void);

int main(void)
{
    student_info_t student;
    student_info_t* students;
    int current_students = 0;
    int max_students = STUDENTS_COUNT - 1;
    student_info_t* ptr_temp = NULL;

    students = (student_info_t*)malloc(sizeof(student_info_t) * STUDENTS_COUNT);
    if (!students) {
        fprintf(stderr, "%s\n", "error while memory allocating");
        return 1;
    }

    while (TRUE) {
        student = read_student();

        if (current_students == max_students) {
            max_students += INCREMENT;
            ptr_temp = (student_info_t*)malloc(max_students * sizeof(student_info_t));
            memcpy(ptr_temp, students, current_students * sizeof(student_info_t));
            free(students);
            students = ptr_temp;
        }

        students[current_students++] = student;
    }

    /* 원하는 작업 수행 */

    free(students);
    students = NULL;

    return 0;
}

student_info_t read_student(void)
{
    student_info_t temp_student;

    printf("Enter firstname: ");
    scanf("%s", temp_student.firstname);

    printf("Enter lastname: ");
    scanf("%s", temp_student.lastname);
    
    printf("Enter id: ");
    scanf("%u", &temp_student.id);

    printf("Enter score: ");
    scanf("%f", &temp_student.score);

    return temp_student;
}

