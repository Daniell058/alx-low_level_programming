#include <stdio.h>
#include <string.h>

/**
 *_strcat - copy cat of the builtin strcat
 *
 *@dest: destination string
 *
 *@src: source string
 *
 *Return: the destination
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}


