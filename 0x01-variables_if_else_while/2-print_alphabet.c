#include <stdio.h>

/**
 *main - Entry point
 *Description: prints something fun
 *Return: always 0
*/

int main(void)
{
    char letter = 'A';

    for (letter; letter <= 'Z'; letter++)
    {
        putchar(letter);
    }
}
