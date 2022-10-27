#include "main.h"
#include <stdio.h>

/**
 *string_toupper - converts lowercase to uppercase
 *@str: string to be converted
 *Return: converted string
*/


char *string_toupper(char *str)
{
	int i;

	while (str[i] != '\0')
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{

			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
