#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
	size_t len = 10;
	char *lineptr = malloc(sizeof(char) * 10);

	printf("$ ");
	getline(&lineptr, &len, stdin);
	printf("%s", lineptr);
	return (main());
}
