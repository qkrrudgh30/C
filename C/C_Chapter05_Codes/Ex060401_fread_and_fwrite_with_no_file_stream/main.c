#include <stdio.h>

#define LENGTH (64)

int main(void)
{
    int nums[LENGTH];
    size_t num_read;
    FILE* fstream;

    num_read = fread(nums, sizeof(nums[0]), LENGTH, fstream);
    /* sizeof(nums[0]), 즉 int만한 블록을 count개만큼 fstream에서 읽어와서 nums에 저장합니다. 총 64*4byte */
    fwrite(nums, sizeof(nums[0]), LENGTH, fstream);

    return 0;
}



