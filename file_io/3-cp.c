#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
* error_exit - copies the content of one file to another
* @message: Number of arguments
* @i: Array of argument strings
* @ptr: Array of argument strings
* Return: 0 on success
*/

void error_exit(const char *message, int i, const char *ptr)
{
	dprintf(STDERR_FILENO, message, ptr);
	exit(i);
}

/**
* main - entry point
* @argc: Number of arguments
* @argv: Array of argument
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_written;

	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit("Usage: cp file_from file_to\n", 97, NULL);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit("Error: Can't read from file %s\n", 98, argv[1]);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		error_exit("Error: Can't write to %s\n", 99, argv[2]);

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			error_exit("Error: Can't write to %s\n", 99, argv[2]);
	}

	if (bytes_read == -1)
		error_exit("Error: Can't read from file %s\n", 98, argv[1]);

	if (close(file_from) == -1)
		error_exit("Error: Can't close fd %d\n", 100, argv[1]);
	if (close(file_to) == -1)
		error_exit("Error: Can't close fd %d\n", 100, argv[2]);

	return (0);
}
