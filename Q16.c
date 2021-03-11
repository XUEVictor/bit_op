#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool isPowerOfTwo(int n)
{
    int8_t cnt = 0;
    if (!n)
        return false;

    while (n)
    {
        if (n & 1)
            cnt++;
        if (cnt > 1)
            return false;
        n >>= 1;
    }
    return true;
}

bool way2(int n)
{
    return n > 0 ? !(n & (n - 1)) : false;
}

int main()
{
    // printf("ans : %d\n", isPowerOfTwo(1));
    printf("ans : %d\n", way2(1));
}