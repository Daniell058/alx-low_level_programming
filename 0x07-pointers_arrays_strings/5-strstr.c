#include "main.h"
#include <string.h>

/**
 *_strstr - mimics built in strstr
 *@haystack: param 1
 *@needle: param 2
 *Return: where the needle is found
*/



char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
