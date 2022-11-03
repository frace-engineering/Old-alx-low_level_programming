#include "main.h"

/**
 * factorial - returns the factorial of an integer
 * @n: the incoming integer
 * Return: the factorial of n
 */


int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
