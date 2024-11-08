#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the product of two numbers to the terminal
 * @argc: Counter
 * @argv: Array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
