#include <stdio.h>

/**
 *main - Entry point
 *Description: prints something fun
 *Return: always 0
*/

int main(void)
{
char letter;
int num;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
}

for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}

putchar('\n');
return (0);
}
