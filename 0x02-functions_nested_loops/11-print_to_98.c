#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - prints from any number to 98
 *@n: must be of type int
 *Return: void
*/

void print_to_98(int n)
{
    printf("%d ", n);
    while (n != 98)
    {

        if (n > 98)
            n--;
        else
            n++;
        printf(", ");
        printf("%d", n);
    }
    printf("\n");
}
