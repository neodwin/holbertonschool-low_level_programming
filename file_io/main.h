#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024

#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/* Prototypes */

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_exit(const char *message, int code, const char *file);

#endif /* MAIN_H */
