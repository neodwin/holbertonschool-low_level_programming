#include "main.h"
#include <stdio.h>

/**
  * append_text_to_file - appends text to a file
  * @filename: the name of the file
  * @text_content: is NULL, do not add anything to the file
  * Return: 1 on success, -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int append_file, len, i;

	if (filename == NULL)
		return (-1);
	append_file = open(filename, O_WRONLY | O_APPEND);
	if (append_file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (len = 0; text_content[len]; len++)
		;
	i = write(append_file, text_content, len);
	close(append_file);
	return (i == -1 ? -1 : 1);
}
