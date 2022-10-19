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
    int first, last;
    for (i = 0; i <= 9; i++)
    {
	for (j = 0; j <= 9; j++)
	{
	    int times = (i * j);
	    first = times;
	    last = (times % 10);
	    while (first >= 10)
	    {
		first = first / 10;
	    }
	    if (times > 10)
	    {
		_putchar('0' + first);
		_putchar('0' + last);
	    }
	    else
		_putchar('0' + first);

	    if (j < 9)
	    {
		_putchar(',');
		_putchar(' ');
	    }
	}
	_putchar('\n');
    
}
