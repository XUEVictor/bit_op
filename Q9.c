//////////////////////////////////////////////
/////////////////Question/////////////////////

// Given two integers L and R,
// find the count of numbers in the range [L, R] (inclusive) having a prime number of set bits
// in their binary representation.

// (Recall that the number of set bits an integer has is the number of 1s present when written
// in binary. For example, 21 written in binary is 10101 which has 3 set bits. Also, 1 is not a prime.)
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
int is_prime(int x)
{
    if (x < 2)
        return 0; // 1 不是質數，且不考慮負整數與 0，故輸入 x<=1 時回傳 0
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0)
            return 0; // 一旦出現整除，回傳 0
    return 1;         // 迴圈跑完後都沒有整除，回傳 1
}
int countPrimeSetBits(int L, int R)
{
    // int *arr = (int *)malloc(sizeof(int) * (R - L + 1));
    // memset(arr, 0, sizeof(R - L + 1));
    int total_cnt = 0;
    for (int i = L; i <= R; i++)
    {
        // printf("value : %d \n", i);
        int temp = i;
        int cnt = 0;
        while (temp)
        {
            if ((temp & 1))
            {
                cnt++;
            }
            temp = temp >> 1;
        }
        // arr[i - L] = cnt;
        if (is_prime(cnt))
            total_cnt++;
    }
    // PrintArray(arr, R - L + 1);
    return total_cnt;
}
int main()
{
    printf("Ans : %d \n", countPrimeSetBits(6, 10));
}
