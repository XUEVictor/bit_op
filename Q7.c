//////////////////////////////////////////////
/////////////////Question/////////////////////

// Given a non-empty array of integers nums, every element appears twice except for one.
// Find that single one.
// Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory?
//////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int singleNumber(int *nums, int numsSize)
{
    for (int i = 1; i < numsSize; i++)
    {
        nums[0] ^= nums[i];
    }
    return nums[0];
}

int main()
{
    int num[3] = {2, 2, 1};
    singleNumber(num, 3);
}
