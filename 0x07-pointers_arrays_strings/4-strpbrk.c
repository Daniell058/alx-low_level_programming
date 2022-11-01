#include "main.h"

/**
 *_strpbrk - imitates built in strpbrk
 *@s: param 1
 *@accept: param 2
 *Return: either null or remaining string
*/


char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i])
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return (0);
}
