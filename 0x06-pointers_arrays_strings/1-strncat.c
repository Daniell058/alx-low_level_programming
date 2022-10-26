#include "main.h"
#include <stdio.h>


/**
  * _strncat - copy cat of built in strncat
  *
  *@dest: string to be appended
  *
  *@src: what to be appended
  *
  *@n: maximum number of characters to be appended
  *
  *Return: the destination string
 */


char *_strncat(char *dest, char *src, int n)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (dest[i] != '\0')
    {
        i++;
    }

    while (k < n)
    {
        dest[i] = src[k];
        i++;
        k++;
    }
    dest[i] = '\0';

    return (dest);
}
