//////////////////////////////////////////////
/////////////////Question/////////////////////

// Given a positive integer num, output its complement number.
// The complement strategy is to flip the bits of its binary representation.
//////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int findComplement(int num)
{
    int temp = num;
    int cnt = 0;
    int H = 0;
    while (temp)
    {
        // printf("process : %d \n", (temp & 1));
        if ((temp & 1))
            H = cnt;
        cnt++;
        temp >>= 1;
    }
    // printf("H bit is %d \n", H);
    while (H >= 0)
    {
        temp |= 1 << H;
        H--;
        // printf("temp is %d \n", temp);
    }
    // printf("temp is %d \n", temp);

    return num ^ temp;
}
int main()
{
    printf("Ans : %d \n", findComplement(1));
}
