//////////////////////////////////////////////
/////////////////Question/////////////////////

// The Hamming distance between two integers is the number of positions at
// which the corresponding bits are different.

// Given two integers x and y, calculate the Hamming distance.

//////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hammingDistance(int x, int y)
{
    int dist = 0;

    // The ^ operators sets to 1 only the bits that are different
    // for (unsigned val = x ^ y; val > 0; ++dist)
    // {
    //     printf("Value before : %d \n", val);

    //     // We then count the bit set to 1 using the Peter Wegner way
    //     val = val & (val - 1); // Set to zero val's lowest-order 1
    //     printf("Value after : %d \n", val);
    // }

    int val = x ^ y;
    while (val > 0)
    {
        if ((val & 1))
        {
            dist++;
        }
        val = val >> 1;
    }

    // Return the number of differing bits
    return dist;
}

int main()
{
    printf("ans : %d \n", hammingDistance(14, 1));
}
