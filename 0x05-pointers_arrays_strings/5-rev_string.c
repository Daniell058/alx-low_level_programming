#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *rev_string - reverses a string
 *@s: the string to be reverses
 *Return: Nothing
*/

void rev_string(char *s)
{
	int len = (strlen(s) - 1);
	int i;

	for (i = 0; i <= len / 2; i++)

	{

		char p = s[i];

		s[i] = s[len - i];
		s[len - i] = p;
	}
}
