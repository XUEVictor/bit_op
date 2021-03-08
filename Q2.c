//////////////////////////////////////////////
/////////////////Question/////////////////////

//Given 3 positives numbers a, b and c.
//Return the minimum flips required in some bits of a and b to make ( a OR b == c ).
//(bitwise OR operation).
//Flip operation consists of change any single bit 1 to 0 or change the bit 0 to 1 in their binary representation.

//////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *decode(int *encoded, int encodedSize, int first, int *returnSize)
{
    int *ans = (int *)malloc(sizeof(int) * (encodedSize + 1));
    memset(ans, 0, sizeof(encodedSize + 1));
    ans = first;
    printf("i = %d value : %d \n", 0, ans[0]);

    for (int i = 0; i < encodedSize; i++)
    {
        ans[i + 1] = ans[i] ^ encoded[i];

        // printf("i = %d value : %d \n", i + 1, ans[i + 1]);
    }
    *returnSize = encodedSize + 1;
    return ans;
}
int main()
{
    int in[3] = {1, 2, 3};
    int out_size = 0;
    decode(in, 3, 1, &out_size);
}
