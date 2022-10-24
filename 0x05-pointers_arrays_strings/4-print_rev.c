#include "main.h"
#include <stdio.h>

/**
 *print_rev - reverses a string
 *
 *@s: a string
 *
 *Return: nothing
*/

void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = (len - 1); i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
