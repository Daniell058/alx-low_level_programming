#include <stdio.h>

/**
 *main - Entry point
 *Description: prints something fun
 *Return: always 0
*/

int main(void)
{
    char letter;

    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        putchar(letter);
    }
    return (0);
}
