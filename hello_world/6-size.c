#include <stdio.h>
/**
 *  main - using printf
 *
 * Description: bla
 * Return: always return 0 to indicate success
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n",  sizeof(int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
return (0);
}
