#include <stdio.h>
#include <stdlib.h>


/**
 *main - prints the product of the arguments
 *@argc: no of arguments
 *@argv: arguments array
 *Return:always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	else
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);
		int product = i * j;

		printf("%d", product);
		return (0);
	}
}
