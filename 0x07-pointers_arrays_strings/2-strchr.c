#include "main.h"

/**
 *_strchr - mimics built in strchr
 *@s: the string
 *@c: charactter to be found
 *Return: NULL or the reamaining string
*/

char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			return (&s[j]);
		}
		j++;
	}
	return (0);
}
