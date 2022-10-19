#include "main.h"
#include <stdio.h>

/**
 *times_table - prints the 9 times table
 *
 *Return: Nothing
*/

void times_table(void)
{

 int i, j;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            int times = (i * j);

            printf("%2d", times);
            if (j < 9)
            {
                printf(",");
                printf(" ");
            }
        }
        printf("\n");
    }
}
