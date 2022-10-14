#include <stdio.h>

/**
 *main - Entry point
 *Description: prints something fun
 *Return: always 0
*/

int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
