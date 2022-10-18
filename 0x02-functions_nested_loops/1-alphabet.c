#include "main.h"

/**
 *main - checks the code
 *Description: prints the alphabet
 *Return: always 0
*/

void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		_putchar(let);
	}
	_putchar('\n')
	return (0);
}

int main(void)
{
	print_alphabet();
	return (0);
}
