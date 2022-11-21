#include <stdio.h>
#include <stdarg.h>
int vadd(const unsigned int arg1, ...);
int vadd(const unsigned int arg1, ...)
{
	va_list pan;
	unsigned int i;
	unsigned int sum;

	sum = 0;
	va_start(pan, arg1);
	if (arg1 == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < arg1; i++) /*arg1; i >= 0; i = va_arg(pan, int))*/
		{
			sum += va_arg(pan, int);
		}
	}
	va_end(pan);
	return (sum);
}
/**
int main(void)
{
	int sum;

	sum = vadd(2, 98, 1024);
	printf("%d\n", sum);
	sum = vadd(4, 98, 1024, 402, -1024);
	printf("%d\n", sum);
	return (0);
}
*/
