#include <stdio.h>

/**
*main - prints the first 98 fibonacci sequence
*
*Return: Always 0
*/

int main(void)
{
	unsigned long num1, num2, num3;
	unsigned int i;

	num1 = 1;
	num2 = 2;
	printf("%lu", num1);
	for (i = 2; i <= 98; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf(", %lu", num1);
	}
	printf("\n");
	return (0);
}
