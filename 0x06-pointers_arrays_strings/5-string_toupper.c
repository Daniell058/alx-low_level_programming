#include "main.h"
#include <stdio.h>

/**
 *string_toupper - converts lowercase to uppercase
 *@str: string to be converted
 *Return: converted string
 *
*/


char *string_toupper(char *str)
{
	int i, j;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{

			str[j] = str[j] - 32;
		}
	}
	return (str);
}
