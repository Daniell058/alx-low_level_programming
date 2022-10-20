#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest;

<<<<<<< HEAD
	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
=======
	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
>>>>>>> 102f4cb4f0da4a19ddfc10d841958a69d8e85469
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
