#include "main.h"
#include <stdio.h>

/**
 *string_toupper - converts lowercase to uppercase
 *@s: string to be converted
 *Return: converted string
*/


char *string_toupper(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
