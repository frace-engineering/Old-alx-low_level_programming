#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>

/**
 * main - execve
 * Return: Always 0
 */
int main(void)
{
	int i;

	char *filename = malloc(sizeof(char) * 10);
	size_t n = 50;
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	char *comm[] = {"/bin/ls", "/bin/pwd", "bin/env", "/bin/less", "/bin/exit", "/bin/cat", "/bin/clear"};

	printf("$ ");
	getline(&filename, &n, stdin);

	for (i = 0; filename[i] != '\n'; i++)
		;
	filename[i] = '\0';
	argv[0] = filename;

	if (fork() == 0)
	{
		//switch (comm[])
		if (filename == "/bin/ls")
		{
			argv[0] = comm[0];
		}
		else if (filename == "/bin/pwd")
		{
			argv[0] = comm[0];
			argv[1] = " ";
		}
		else if (filename == "/bin/env")
		{
			argv[0] = comm[0];
		}
		else if (filename == "/bin/less")
		{
			argv[0] = comm[0];
		}
		else if (filename == "/bin/exit")
		{
			argv[0] = comm[0];
		}
		else if (filename == "/bin/cat")
		{
			argv[0] = comm[0];
		}
		else if (filename == "/bin/clear")
		{
			argv[0] = comm[0];
		}
		else
		{
			printf("Command not found:");
		}
		if (execve(argv[0], argv, NULL) == -1)
		{
			printf("Error:");
		}
	}
	wait(NULL);
	return(main());
}






	


