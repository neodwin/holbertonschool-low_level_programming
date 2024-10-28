#include "main.h"

/**
* _isdigit - write a function that check for a digit (0 through 9)
* @c: character check
* Return: 0 otherwise or 1 if c is a digit
**/
int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
