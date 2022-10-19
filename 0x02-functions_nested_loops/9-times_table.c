#include "main.h"

/**
 *times_table - prints the 9 times table
 *
 *Return: Nothing
*/

void times_table(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			int times = (i * j);

			printf("%2d", times);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
