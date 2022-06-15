#include <stdio.h>
/**
 * main -finds and prints the largest prime factor of number 612852475143
 *
 * Return: void
 */
int main(void)
{	
	long int i;

	for (i = 2; i < 612852475143 / 2; i++)
		if (612852475143 % i == 0)
		{
			printf("%ld\n",612852475143 / i);
			break;
		}
	return (0);
}
