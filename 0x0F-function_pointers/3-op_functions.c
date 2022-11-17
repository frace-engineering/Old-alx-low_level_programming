#include "function_pointers.h"
#include "3-calc.h"

/**
 * op_add - returns the sum of two integers
 * @a:  first input integer
 * @b: secont input integer
 * Return: sum
 */


int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}
/**
 * op_sub - returns the difference of 2 integers
 * @a: first input integer
 * @b: second input integer
 * Return: Always 0 (Success)
 */
int op_sub(int a, int b)
{
	int def = a - b;

	return (def);
}

/**
 * op_mul - returns product of two integers
 * @a: first input integer
 * @b: second input integer
 * Return: Always 0 (Success)
 */
int op_mul(int a, int b)
{
	int product = a * b;

	return (product);
}

/**
 * op_div - divides two integers
 * @a: numerator
 * @b: denominator
 * Return: div
 */
int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}

/**
 * op_mod - retiurns the modulus of teo integers
 * @a: numerator
 * @b: denominator
 * Return: mod
 */
int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
