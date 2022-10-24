#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strcpy - same as the built-in strcpy
 *@dest : destination
 *@src: source
 *Return: the destination
*/

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
