#include <stdio.h>
/**
 * main - prints out the sum of even Fibonacci numbers lower than 4000000
 *
 * Return: 0
 */

int main(void)
{
	long int i, a, b, sum;

	a = 1, b = 2, i = 0;
       	sum = b;
	while (a <= 4000000 && b <= 4000000)
	{
		if (i % 2 == 0)
		{
			a += b;
			if (a % 2 == 0)
				sum += a;
		}
		else
		{
			b += a;
			if (b % 2 == 0)
				sum += b;
		}

		i++;
	}
	printf("%ld", sum);
	putchar('\n');
	return (0);
}
