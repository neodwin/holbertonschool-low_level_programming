#include "main.h"
#include <stdio.h>

/**
 * main - Print the number of arguments to the screen
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	argv[0] = 0;
	printf("%d\n", argc - 1);
	return (0);
}
