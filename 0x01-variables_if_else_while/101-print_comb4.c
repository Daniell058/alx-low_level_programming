#include <stdio.h>

/**
 *main - Entry point
 *Description: prints something fun
 *Return: always 0
*/

int main(void)
{
int num1;
int num2;
int num3;
for (num1 = '0'; num1 <= '9'; num1++)
{
for (num2 = num1; num2 <= '9'; num2++)
{
for (num3 = num2; num3 <= '9'; num3++)
{
if (!(num1 == num2) && !(num2 == num3) && !(num1 == num3))
{
putchar(num1);
putchar(num2);
putchar(num3);
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
