#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum number of cents
 *@argc: no of arguments
 *@argv: arguments array
 *Return:always 0
*/

int main(int argc, char *argv[])
{
	int change[] = {25, 10, 5, 2, 1};
	int cents = atoi(argv[1]);
	int i;
	int sum = 0;


	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}


	for (i = 0; i < 5; i++)
	{
		if (cents >= change[i])
		{

			int x = cents / change[i];

			sum += x;
			cents -= (x * change[i]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
