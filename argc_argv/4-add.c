#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers
 * @argc: number
 * @argv: array argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a = 0;
	int i = 0;
	int j = 0;

	for (a = 1; a < argc; a++)
	{
		for (i = 0; argv[a][i]; i++)
		{
			if (argv[a][i] < '0' || argv[a][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		j += atoi(argv[a]);
	}

	printf("%d\n", j);

	return (0);
}
