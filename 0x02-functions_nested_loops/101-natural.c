#include "main.h"
#include <stdio.h>

/**
 *main - prints the sum of all multiples of three and five
 *Return: Always void
*/

int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

