#include "main.h"
#include <stdlib.h>


/**
 *print_last_digit - returns the last digit of a number
 *@x: must be of type int
 *Return: the last digit of a number
*/

int print_last_digit(int x)
{
	int last = (abs(x) % 10);

	printf("%d", last);
	return (last);
}
