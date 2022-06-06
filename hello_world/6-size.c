#include <stdio.h>
/**
 * main - The functon prints the sizes of different data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %s\n byte(s)", sizeof(char));
	printf("Size of an int: %s\n byte(s)", sizeof(int));
	printf("Size of a long int: %s\n byte(s)", sizeof(long int));
	printf("Size of a long long int: %s\n byte(s)", sizeof(long long int));
	printf("Size of a float: %s\n byte(s)", sizeof(float));
	return (0);
}
