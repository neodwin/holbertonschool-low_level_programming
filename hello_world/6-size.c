#include <stdio.h>
/**
 *  main - using printf
 *
 * Description: bla
 * Return: always return 0 to indicate success
 */
int main(void)
{
	printf("Size of a char: %lu bytes\n", (unsigned long) sizeof(char));
	printf("Size of an int: %lu bytes\n", (unsigned long) sizeof(int));
	printf("Size of a float: %lu bytes\n", (unsigned long) sizeof(float));
	printf("Size of a long int: %lu bytes\n", (unsigned long) sizeof(long int));
	printf("Size of a long long int: %lu bytes\n", (unsigned long) sizeof(long long int));
return (0);
}
