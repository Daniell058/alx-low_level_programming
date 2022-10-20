#include "main.h"

/**
 *print_number - prints the digit of a number
 *
 *@n: param 1
 *
 *Return: always void
*/

void print_number(int n)
{
	int last, digit;

	if (n == 0)
		return;

	last = n % 10;

	print_number(n / 10);

	_putchar('0' + last);
}
