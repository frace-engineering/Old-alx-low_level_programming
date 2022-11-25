#include <stdio.h>
/**
 * myFunction - function that prints somthing before
 * the main function is executed.
 */
void myFunction(void) __attribute__ ((constructor));

void myFunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
