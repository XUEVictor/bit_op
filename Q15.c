#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *toHex(int num)
{
    char *s = (char *)malloc(sizeof(char) * 1);
    memset(s, '\0', sizeof(1));
    s[0] = '\0';

    // char *s = "\0";
    while (num)
    {
        int8_t temp = num & 0x000f;
        printf("temp :  %d\n", temp);

        if (temp < 10)
        {
            printf("c : %d\n", temp);
        }
        else
        {
            char c = 'A' + temp - 10;
            strcat(s, &c);
            printf("s : %s\n", s);
            // printf("c : %c\n", c);
        }

        num >>= 8;
    }

    return s;
}
int main()
{
    printf("ans : %s\n", toHex(26));
}