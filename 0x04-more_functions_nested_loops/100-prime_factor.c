#include <stdio.h>

/**
 *main - Entry point
 *Return: always 0
*/

int main(void)
{
	int i;
	unsigned long prod, pass;

	unsigned long n = 612852475143;

	pass = n;

	prod = 1;

	for (i = 2; i <= 99; i++)
	{
		while (n % i == 0)
		{
			prod *= i;
			n = n / i;
		}
	}
	printf("%li\n", (pass / prod));
	return (0);
}

