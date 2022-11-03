#include "main.h"

/**
 * is_prime_number - checks for a prime number
 * @n: the number under check
 * Return: 1 if n is prime else 0
 */
int is_prime_number(int n)
{
	if (n > 1)
	{
		int d;


		if (d > 1 && d < n)
		{	
		if (n % d == 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		}
	}
}
