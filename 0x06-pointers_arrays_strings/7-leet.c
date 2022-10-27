#include "main.h"

/**
 *leet - encodes a string in the leet format
 *@s: string to be encoded
 *Return: the encoded string
*/


char *leet(char *s)
{
	char letters[] = "aeotl";
	char nums[] = "43071";

	int i = 0;
	int j = 0;
	int len = 5;

	while (s[i])
	{
		for (j = 0; j < len; j++)
		{
			if (s[i] == letters[j] || s[i] == (letters[j] - 32))
			{
				s[i] = nums[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
