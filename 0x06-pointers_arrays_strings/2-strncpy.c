#include <stdio.h>
#include "main.h"
#include <string.h>

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
	return (strncpy(dest, src, n));
}
