#include <stdio.h>
/**
 * main - prints out the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int i, a, b;

	a = 1, b = 2;
	printf("%ld, %ld", a, b);
	for (i = 0; i < 48; i++)
	{
		if (i % 2 == 0)
		{
			a += b;
			printf(", %ld", a);
		}
		else
		{
			b += a;
			printf(", %ld", b);
		}
	}
	putchar('\n');
	return (0);
}
