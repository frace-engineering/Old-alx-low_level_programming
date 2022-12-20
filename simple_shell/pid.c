#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point*
 * Return: Always 0 (Success)
 */

int main(void)
{
	pid_t pid;

	pid = getpid();
	printf("%u\n", pid);
	return (0);
}
