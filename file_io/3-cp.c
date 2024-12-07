#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * close_func - close file
 * @file: file to close
 */

void close_func(int file)
{
	int c = close(file);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - copy content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, read_bytes, write_bytes;
	char *text;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	text = malloc(sizeof(char) * 1024);
	if (!text)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file_from = open(argv[1], O_RDONLY);
	read_bytes = read(file_from, text, 1024);
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	do {
		if (file_from == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_bytes = write(file_to, text, read_bytes);
		if (file_to == -1 || write_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		read_bytes = read(file_from, text, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_bytes > 0);
	free(text);
	close_func(file_from);
	close_func(file_to);
	return (0);
}
