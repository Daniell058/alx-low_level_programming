#include <stdio.h>

/**
 *main - Entry point
 *Description: prints something fun
 *Return: always 0
*/

char main(void)
{
    char letter = 'A';

    for (letter; letter <= 'Z'; letter++)
    {
        putchar(letter);
    }
    return (0);
}
