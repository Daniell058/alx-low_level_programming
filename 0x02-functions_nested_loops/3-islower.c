#include <ctype.h>

/**
 * _islower - checks whether a letter is lowercase
 *@c: must be of type int
 * Return: either 0 or 1
*/

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}

