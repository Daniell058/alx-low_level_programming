#include "main.h"
#include "string.h"


/**
 *_puts_recursion - mimics the built in puts
 *@s: string to be inputed
 *Return: void
*/

void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		putchar('\n');
	}
	else
	{
		putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
