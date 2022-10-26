#include "main.h"

/**
 *reverse_array - reverses an array of integers
 *
 *@a: the array
 *
 *@n: the number of elements in the array
 *
 *Return: void
*/


void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
