#include <stdio.h>
#include "main.h"

/**
 *_strncpy - same as built in strncpy
 *
 *@dest: destination string
 *
 *@src: source string
 *
 *@n: number of characters to be copied
 *
 *Return: the destination file
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	int k = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
