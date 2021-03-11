
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int hammingWeight(uint32_t n)
{
    int cnt = 0;
    while (n)
    {
        if (n & 1)
            cnt++;
        n >>= 1;
    }
    return cnt;
}

int main()
{
    printf("ans : %d\n", hammingWeight(11));

    // int a = 1;
    // int b = 1;
    // printf("%d \n", a | b);
}
