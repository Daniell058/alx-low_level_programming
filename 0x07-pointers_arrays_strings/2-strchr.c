#include "main.h"

/**
 *_strchr: mimics buik=lt in strchr
 *@s: the string
 *@c: charactter to be found
 *Return: NULL or the reamaining string
*/

char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] == c)
		{
			return (&s[j]) ;
		}
		j++;
	}
	return (NULL);
}
