#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool isPowerOfFour(int n)
{
    return (n > 0) && ((n & (n - 1)) == 0) && ((n & 0xAAAAAAAA) == 0);
}
int main()
{
    printf("ans : %d \n", isPowerOfFour(5));
}