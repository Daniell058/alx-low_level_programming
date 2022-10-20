#include "main.h"

/**
 *print_line - prints line n number of times
 *@n: param 1
 *Return: always void
*/


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
