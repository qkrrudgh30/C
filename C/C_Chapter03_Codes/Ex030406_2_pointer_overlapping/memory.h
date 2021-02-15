#ifndef MEMORY_H
#define MEMORY_H

#define TRUE (1)
#define FALSE (0)
#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

int is_overlap(const size_t arr1_len, int* arr1, const size_t arr2_len, int* arr2);

#endif /* MEMORY_H */



