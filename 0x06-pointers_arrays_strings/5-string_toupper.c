#include "main.h"
#include <stdio.h>

/**
 *string_toupper - converts lowercase to uppercase
 *@str: string to be converted
 *Return: converted string
 *
*/


char *string_toupper(char *s)
{
	int i, j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{

			s[j] = s[j] - 32;
		}
	}
	return (s);
}
