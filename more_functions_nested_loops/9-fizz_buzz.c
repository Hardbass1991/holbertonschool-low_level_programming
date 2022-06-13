#include <stdio.h>
/**
 * main - prints all numbers 0-100 separated by spaces
 * it prints "Fizz" instead of the multiples of 3,
 * prints "Buzz" instead of the multiples of 5,
 * and prints "FizzBuzz" instead of multiples of both 3 ad 5
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
