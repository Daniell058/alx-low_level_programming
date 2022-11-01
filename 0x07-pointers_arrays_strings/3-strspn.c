#include "main.h"

/**
 *_strspn - imitates built in strspn
 *@s: param 1
 *@accept: param 2
 *Return: k
*/


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int k = 0;

	while (s[i])
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}

			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				return (k);
			}
		}
		i++;
	}
	return (k);
}
