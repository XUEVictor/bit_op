//////////////////////////////////////////////
/////////////////Question/////////////////////
// Given an array nums containing n distinct numbers in the range [0, n],
// return the only number in the range that is missing from the array.

// Follow up: Could you implement a solution using only O(1) extra space complexity
// and O(n) runtime complexity?
//////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int missingNumber(int *nums, int numsSize)
{
    int ans = numsSize;
    for (int i = 0; i < numsSize; i++)
    {
        ans ^= nums[i] ^ i;
    }
    return ans;
}

int main()
{
    int num[9] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    printf("ans : %d\n", missingNumber(num, 9));

    // int a = 1;
    // int b = 1;
    // printf("%d \n", a | b);
}
