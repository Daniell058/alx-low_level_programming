#include "main.h"
#include <stdio.h>

/**
 *print_array - printts array to a specific point
 *@a: the array
 *@n: where you want to print to
 *Return: void
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
}
