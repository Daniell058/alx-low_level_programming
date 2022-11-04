#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - prints the sum of the arguments
 *@argc: no of arguments
 *@argv: arguments array
 *Return:always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			char *j = argv[i];

			if (*j < '0' || *j > '9')
			{
				puts("Error");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
	}
	if (sum > 0)
		printf("%d\n", sum);

	return (0);
}
