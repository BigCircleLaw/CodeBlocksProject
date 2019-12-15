#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_nums(int* nums, int numsSize)
{
    for (int i = 0; i < numsSize; i++)
        printf("%d, ",nums[i]);
    printf("\n");
}

void rotate(int* nums, int numsSize, int k){
    k = k % numsSize;
    if (k == 0) return;
    int Maximum_common_divisor = 1;
    for (int i = 2;i <= sqrt(k); i++)
    {
        if( ((k%i)==0) && ((numsSize%i)==0) )
            Maximum_common_divisor = i;
    }
    printf("Maximum_common_divisor = %d\n", Maximum_common_divisor);
    for (int j = 0; j < Maximum_common_divisor; j++)
    {
        int val = nums[j];
        int i;
        for (i = j; ((i + numsSize - k) % numsSize) != j; i = (i + numsSize - k) % numsSize)
        {
            nums[i] = nums[(i + numsSize - k) % numsSize];
            printf("i = %d\n", i);
            print_nums(nums, numsSize);
        }
        printf("i = %d\n", i);
        nums[i] = val;
        print_nums(nums, numsSize);
    }

}


int main()
{
    int array_val[] = {1,2,3,4,5,6};
    int len = sizeof(array_val)/sizeof(int);
    rotate(array_val, len, 4);
    printf("__________end__________\n");
    print_nums(array_val, len);
    return 0;
}
