#include <stdio.h>
/**
 * main -finds and prints the largest prime factor of number 612852475143
 *
 * Return: void
 */
int main(void)
{
	long int i, j, n, prime;

	for (i = 2; i < 612852475143 / 2; i++)
		if (612852475143 % i == 0)
		{
			n = 612852475143 / i;
			prime = 1;
			for (j = 2; j < n / 2; j++)
				if (n % j == 0)
				{
					prime = 0;
					break;
				}
			if (prime == 1)
			{
				printf("%ld\n", n);
				break;
			}
		}
	return (0);
}
