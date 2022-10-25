#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 *_atoi - same as built in atoi
 *@s: param 1
 *Return: nothing
*/

int _atoi(char *s)
{
    int i;
    int num = 0;
    int sign = 1;
    int len = (strlen(s) - 1);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '-')
        {
            sign *= -1;
            continue;
        }

        if (s[i] < '0' || s[i] > '9')
        {
            continue;
        }

        else
        {
            {
                int how_big = pow(10, (len - i));
                num += ((how_big) * (s[i] - '0'));

                if (s[i + 1] < '0' || s[i + 1] > '9')
                    break;
            
        }
    }
}
return (num * sign);
}
