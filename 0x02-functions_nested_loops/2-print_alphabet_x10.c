#include "main.h"

/**
  *print_alphabet_x10 - print's the alphabet in lower case 10 times
  *
  * Return - Always 0
*/

void print_alphabet_x10(void)
{
	int let, num;

	for (num = 0; num < 10 ; num++)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
	}
	_putchar('\n');
}

