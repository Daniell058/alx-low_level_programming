#include "main.h"

/**
  *swap_int - swaps two integers
  *@a: integer 1
  *@b: integer 2
  *Return: nothing
*/



void swap_int(int *a, int *b)
{
	int p, q;

	p = *b;
	q = *a;
	*a = p;
	*b = q;
}
