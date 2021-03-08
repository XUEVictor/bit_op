//////////////////////////////////////////////
/////////////////Question/////////////////////

// Given an integer n and an integer start.

// Define an array nums where nums[i] = start + 2*i (0-indexed) and n == nums.length.

// Return the bitwise XOR of all elements of nums.

//////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int xorOperation(int n, int start)
{
    //Recursive way
    // 從0開始，所以 -1
    if (n > 1)
    {
        // printf("Start value : %d \n", start);
        // printf("Start value : %d \n", start ^ xorOperation(n - 1, start + 2));
        return start ^ xorOperation(n - 1, start + 2);
    }
    else
    {
        printf("Start value : %d \n", start);

        // printf("Start value : %d \n", start);
        return start;
    }
}

int main()
{
    xorOperation(5, 0);
    // xorOperation(4, 3);
    // xorOperation(1, 7);
    // xorOperation(10, 5);
}
