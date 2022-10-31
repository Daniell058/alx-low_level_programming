#include "main.h"

/**
 *_memcpy - mimics built in memcpy
 *@dest: destination string
 *@src: source string
 *@n: number of bytes to be replaces
 *Return: the destination string
 *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
