#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
uint32_t reverseBits(uint32_t n)
{
    uint8_t cnt = 31;
    uint32_t temp = 0;
    while (n)
    {
        temp = (n & 1) << cnt;
        --cnt;
    }
    return temp;
}

int main()
{
}