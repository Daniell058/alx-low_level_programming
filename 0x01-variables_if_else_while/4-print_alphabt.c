#include <stdio.h>

/**
 *main - Entry point
 *Description: prints something fun
 *Return: always 0
*/

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'q' || letter == 'e')
{
continue;
}
putchar(letter);
}
putchar('\n');
return (0);
}
