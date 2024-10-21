#include <stdio.h>
/**
 *  main - using printf
 *
 * Description: bla
 * Return: always return 0 to indicate success
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu bytes\n", (unsigned long) sizeof(d));
	printf("Size of an int: %lu bytes\n", (unsigned long) sizeof(a));
	printf("Size of a float: %lu bytes\n", (unsigned long) sizeof(f));
	printf("Size of a long int: %lu bytes\n", (unsigned long) sizeof(b));
	printf("Size of a long long int: %lu bytes\n", (unsigned long) sizeof(c));
return (0);
}
