#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Description: prints something fun
 *Return: always 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int last;
last = n % 10;

if (last > 5)
printf("Last digit of %d is %d and is greater than 5", n, last);

if (last == 0)
printf("Last digit of %d is %d and is 0", n, last);

if (last < 6)
printf("Last digit of %d is %d and is less than 6 and not 0", n, last);


return (0);
}
