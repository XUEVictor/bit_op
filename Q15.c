#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *toHex(int num)
{

    // create size
    int temp = num;
    int size = 0;
    while (temp)
    {
        // printf("Temp size : %d \n", temp);
        temp >>= 4;
        size++;
    }
    printf("Strign len is : %d\n", size);

    char *s = (char *)malloc(sizeof(char) * size + 1);
    memset(s, '\0', sizeof(char) * size + 1);

    for (int i = 0; i < size; i++)
    {
        printf("num is : %d \t", num);
        int8_t temp = num & 0x0000000f;
        printf("Temp : %d \n", temp);

        if (temp < 10)
        {
            char c = temp + '0';
            s[size - i - 1] = c;
        }
        else
            s[size - i - 1] = 'a' + temp - 10;

        num >>= 4;
    }

    return s;
}

int main()
{
    printf("ans : %s\n", toHex(127));
}