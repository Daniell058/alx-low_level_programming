#include <stdio.h>

/**
 *main - prints the sum of even numbers in the fibonacci sequence
 *
 *Return: Always 0
*/


int main(void)
{
	unsigned long long num1, num2, num3;
	int i;
	unsigned long long sum;

	num1 = 1;
	num2 = 2;
	for (i = 2; i <= 50; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if ((num1 < 4000000) && (num1 % 2 == 0))
			sum += num1;
	}
	printf("%llu\n", sum);
	return (0);
}
