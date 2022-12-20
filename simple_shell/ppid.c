#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	pid_t ppid;

	ppid = getppid();
	printf("%u\n", ppid);
	return (0);
}
