#include <stdio.h>
#include "main.h"

/**
 *main - prints the name of a c executable
 *@argc: number of arguments given
 *@argv: an array of argc
 *Return: void
*/

int main(int argc, char *argv[])
{	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
