#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - generates geygen.
 * @N: the desired length og the password
 * Return: Always 0
 */

int main(int N)
{
	int i = 0;

	int random = 0;

	srand((unsigned int)(time(NULL)));

	char num[] = "0123456789";
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char ALPHA[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbole[] = "!@#$^&*?";
	char password[N];

	random = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (random == 1)
		{
			password[i] = num[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 2)
		{
			password[i] = symbole[rand() % 8];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 3)
		{
			password[i] = alpha[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = ALPHA[rand() % 26];
			random = rand() % 4;
			printf("%c\n", password[i]);
		}
	}
}
