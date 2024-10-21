#include <stdio.h>
/**
 *  main - using printf
 *
 * Description: bla
 * Return: always return 0 to indicate success
 */
int main(void)
{
	char d;
	int a;
	float f;
	long int b;
	long long int c;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(c));
return (0);
}
