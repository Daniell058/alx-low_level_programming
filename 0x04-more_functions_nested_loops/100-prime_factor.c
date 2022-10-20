#include <stdio.h>

/**
 *main - Entry point
 *Return: always 0
*/

int main(void)
{
	int i, j, prod;

	unsigned long n = 612852475143;

	prod = 1;

	for (i = 1; i <= 99; i++)
	{
		while (n % i == 0)
		{
			prod *= i;
			n = n / i;
		}
	}
	printf("%d", prod);
	return (0);
}

