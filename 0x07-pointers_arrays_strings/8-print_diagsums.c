#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - sums the numbers at the diagonal of an array
 *@a: array variable
 *@size: size of the array
 *Return: void
*/

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int len = size * size;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < len; i += size + 1)
	{
		sum1 += a[i];
	}

	for (j = (size - 1); j < len; j += (size - 1))
	{
		sum2 += a[j];
	}
	sum2 -= a[len - 1];

	printf("%d, %d", sum1, sum2);
	printf("\n");
}
