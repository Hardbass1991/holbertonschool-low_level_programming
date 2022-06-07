#include <stdio.h>
#include <string.h>
/**
 * main - This script prints the numbers from 0 to 9, using only int types
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
