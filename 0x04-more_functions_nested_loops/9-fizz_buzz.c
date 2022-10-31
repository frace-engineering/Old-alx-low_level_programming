#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers from 1 to 100, print Buzz if number ismultiple of 5
 * if number is multiple of 3, print Fizz, print FizzBuzz if number is a
 * multiple of 3 and 5 else print number.
 *
 * @num: is the range of numbers from 1 to 100.
 *
 * Return: num
 */

int fizz_buzz(int num);

int main(void)
{
	int output = fizz_buzz(100);
	return (0);
}

int fizz_buzz(int num)
{
	
	for (num = 1; num <= 100; num++)
	{
		if ((num % 5 == 0) && (num % 3 == 0))
		{
			puts("FizzBuzz ");
		}
		else if (num % 5 == 0)
		{
			puts("Buzz ");
		}
		else if (num % 3 == 0)
		{
			puts("Fizz ");
		}
		else
			printf("%d ", num);
	}
	return (0);
}
