#include <stdio.h>
#include <stdlib.h>

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
	int count = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
			count++;
	}

	if (count == 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	else
	{

		for (i = 1; i < argc; i++)
		{
			char *j = argv[i];

			if (*j < '0' || *j > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);

	return (0);
}
