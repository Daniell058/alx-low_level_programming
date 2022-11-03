#include "main.h"

/**
 *prime_no_checker - checks if a number is a prime number
 *@n: the number
 *@a: num to start from
 *Return: 1 or 0
*/



int prime_no_checker(int n, int a)
{	
	if ((a < (n / 2)))
	{
		prime_no_checker(n, a + 1);
	}

	if ((n % a) == 0)
	{
		return (0);
	}

	return (1);
}

/**
 *is_prime_number - checks if a number is a prime number
 *@n: the number
 *Return: 1 or 0
*/


int is_prime_number(int n)
{
	if (prime_no_checker(n, 1))
	{
		return (1);
	}
	return (0);
}
