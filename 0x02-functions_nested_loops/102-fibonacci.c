#include <stdio.h>

/**
 *main - prints the fibonacci sequence
 *Return: ALways 0
*/



int main(void)
{
	long num1, num2, num3;
	int i;

	num1 = 1;
	num2 = 2;
	printf("%d", num1);
	for (i = 2; i < 50; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf(" ,%lu", num1);
	}
	return (0);
}
