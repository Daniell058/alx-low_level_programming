#include "main.h"
#include <string.h>

/**
 *_memset - mimics the built in memset
 *@s: string to be modified
 *@b: charcter to be inserted to s
 *@n: number of times b should appear
 *Return: modidied s
*/




char *_memset(char *s, char b, unsigned int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
