#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *puts_half: prints half of a string
 *@str: a string
 *Return: nothing
*/

void puts_half(char *str)
{
    int len = (strlen(str));
    int i = 0;

    if (len % 2 != 0)
    {
        int n = (len - 1) / 2;

        for (i = n + 1; i < len; i++)
        {
            putchar(str[i]);
        }
        putchar('\n');
    }

    else
    {
        int n = len / 2;

        for (i = n; i < len; i++)
        {
            putchar(str[i]);
        }
        putchar('\n');
    }
}
