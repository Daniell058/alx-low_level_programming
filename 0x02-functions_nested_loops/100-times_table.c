#include "main.h"
#include <stdio.h>

/**
 *print_times_table -  prints the times table of a given number
 *@n: Must be less than 15 and more than 0
 *Return: always void
*/

void print_times_table(int n)
{
	if ((n >= 0) && (n <= 15))
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int times = i * j;

				if (j == 0)
					printf("%d", times);
				else
					printf("%3d", times);
				if (j < n)
					printf(", ");
			}
			printf("\n");
		}
	}
}

