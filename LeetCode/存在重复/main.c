#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 4

void put_array(int* nums, int numsSize)
{

    for (int i = 0; i < ARRAY_SIZE; ++i)
        printf("%d ",nums[i]);
    printf("\n");

}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}void QuickSort(int a[],int left,int right){
    if(left<right){
        int i=left, j=right;
        int base=a[left];             //��׼
        while(i<j){
            while(i<j&&a[j]>=base)    //����������С��base��Ԫ��
                j--;
            if(i<j)
                a[i++]=a[j];
            while(i<j&&a[i]<base)    //���������Ҵ���base��ֵ
                i++;
            if(i<j)
                a[j--]=a[i];
        }
        a[i]=base;                  //����׼base�������Ŀ���
        QuickSort(a,left,i-1);      //�ݹ���ã�����
        QuickSort(a,i+1,right);
    }
}
/*
void QuickSort(int *arr, int begin, int end)
{
    int i, j;
    printf("%d,%d\n", begin, end);
    if (begin < end) {
        i = begin + 1;
        j = end - 1;
        if(i == end)
            return;
        while (i < j) {
            if(arr[i] > arr[begin]) {
                swap(&arr[i], &arr[j]);
                j--;
            } else {
                i++;
            }
        }
        if (arr[i] >= arr[begin]) {
            i--;
        }
        swap(&arr[begin], &arr[i]);
        put_array(arr, ARRAY_SIZE);
        printf("-----------%d,%d----------------\n", i, j);
        //scanf("%d", &j);
        QuickSort(arr, begin, i);
        QuickSort(arr, i+1, end);
    }
}
*/
int containsDuplicate(int* nums, int numsSize){
        QuickSort(nums, 0, numsSize);
        put_array(nums, ARRAY_SIZE);
        int len2 = numsSize - 1;
        for (int i = 0; i < len2; ++i)
            if(nums[i] == nums[i+1])
                return 1;
        return 0;
}

int main()
{
    int array_int[ARRAY_SIZE] = {1,2,3,4};
    printf("result = %d\n",containsDuplicate(array_int, ARRAY_SIZE));
    put_array(array_int, ARRAY_SIZE);
    return 0;
}
