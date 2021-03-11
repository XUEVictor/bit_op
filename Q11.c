//////////////////////////////////////////////
/////////////////Question/////////////////////

// Given a positive integer, check whether it has alternating bits: namely,
//  if two adjacent bits will always have different values.
//////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void PrintArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
bool hasAlternatingBits(int n)
{

    while (n)
    {
        // printf("n&1 :  %d \n", (n & 1));
        // printf("(n & 2) >> 1 :  %d \n", (n & 2) >> 1);

        if ((n & 1) == (n & 2) >> 1)
        {
            return false;
        }
        n = n >> 1;
    }
    return true;
}
int main()
{
    printf("%d \n", hasAlternatingBits(3));
    return 0;
}
