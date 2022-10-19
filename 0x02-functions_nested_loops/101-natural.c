#include "main.h"
#include <stdio.h>

/**
 *multiples_of_three - get the sum of all multiples of 3 and 5 below 1024
 *main - prints multiple_of_three
 *Return: Always void
*/

void multiples_of_three(void)
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
}

int main(void)
{
	multiples_of_three();
	return (0);
}
