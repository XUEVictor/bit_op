//////////////////////////////////////////////
/////////////////Question/////////////////////

// Given an integer array arr.
// You have to sort the integers in the array in ascending order by
// the number of 1's in their binary representation and
// in case of two or more integers have the same number of 1's you have to sort them in ascending order.
// Return the sorted array.

//////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void PrintArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int *arr, int *arr2, int front, int end)
{
    int pivot = arr[end];
    int i = front - 1;
    for (int j = front; j < end; j++)
    {
        if (pivot > arr[j])
        {
            i++;
            // printf("a = %d , b = %d \n", arr[i], arr[j]);

            swap(&arr[i], &arr[j]);
            swap(&arr2[i], &arr2[j]);
            // PrintArray(arr, 9);
        }
    }
    i++;
    swap(&arr[i], &arr[end]);
    swap(&arr2[i], &arr2[end]);
    return i;
}

void QuickSort(int *arr, int *arr2, int front, int end)
{
    if (front < end)
    {
        int pivot = Partition(arr, arr2, front, end);
        QuickSort(arr, arr2, front, pivot - 1);
        QuickSort(arr, arr2, pivot + 1, end);
    }
}
void bubbleSort(int *arr, int *arr2, int size)
{

    int toIndex = size;

    while (toIndex > 1)
    {
        toIndex--;
        for (int i = 0; i < toIndex; i++)
        {
            // 如果前面的元素比後面的元素要大，則交換元素位置
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
                swap(&arr2[i], &arr2[i + 1]);
            }
            if (arr[i] == arr[i + 1])
            {
                if (arr2[i] > arr2[i + 1])
                {
                    swap(&arr[i], &arr[i + 1]);
                    swap(&arr2[i], &arr2[i + 1]);
                }
            }
        }
    }
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortByBits(int *arr, int arrSize, int *returnSize)
{

    int *ans = (int *)malloc(sizeof(int) * (arrSize));
    memset(ans, 0, sizeof(arrSize));
    _Bool diff = 0;
    int prev = 0;
    for (int i = 0; i < arrSize; i++)
    {
        int cnt = 0;
        int temp = arr[i];
        while (temp != 0)
        {
            if ((temp & 1))
            {
                cnt++;
            }
            temp = temp >> 1;
        }

        ans[i] = cnt;
    }
    bubbleSort(ans, arr, arrSize);
    PrintArray(ans, arrSize);
    PrintArray(arr, arrSize);
    return arr;
}

int main()
{
    int arr[11] = {1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
    int ans;
    sortByBits(arr, 11, &ans);

    // int arr[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    // int ans;
    // sortByBits(arr, 9, &ans);

    // int a = 4;
    // int b = 5;
    // swap(&a, &b);
    // printf("a = %d , b = %d \n", a, b);
}
