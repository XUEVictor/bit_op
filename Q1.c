//////////////////////////////////////////////
/////////////////Question/////////////////////

// Given a non-negative integer num,
// return the number of steps to reduce it to zero.
// If the current number is even, you have to divide it by 2,
// otherwise, you have to subtract 1 from it.

//////////////////////////////////////////////

#include <stdio.h>

int numberOfSteps(int num)
{
    int cnt = 0;
    while (num > 0)
    {
        if (num % 2 > 0)
            num--;
        else
            num = num / 2;

        cnt++;
    }
    return cnt;
}

//最後一個會被考慮到會多算到一次
int numberOfSteps_v2(int num)
{
    if (!num)
        return 0;
    int cnt = 0;
    while (num)
    {
        cnt += (num & 1) ? 2 : 1;
        num >>= 1;
    }
    return cnt - 1;
}

int main()
{
    printf("number : %d   cnt : %d \n", 8, numberOfSteps_v2(8));
    printf("number : %d   cnt : %d \n", 14, numberOfSteps_v2(14));
    printf("number : %d   cnt : %d \n", 123, numberOfSteps_v2(123));
}
