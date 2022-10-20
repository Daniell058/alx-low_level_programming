#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_isupper - tests whethere a charcter is upper case
 *
 *@c: the character to be tested
 *
 *Return: either 0 or 1
*/

int _isupper(int c)
{
	if (isupper(c))
		return (1);

	else
		return (0);
}
