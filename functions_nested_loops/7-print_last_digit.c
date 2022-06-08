#include "main.h"
/**
 * print_last_digit - Gets the last digit of an input number
 * @n: input number
 *
 * Return: Last digit of input number
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld >= 0)
	{
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		_putchar((ld * -1) + '0');
		return (ld * -1);
	}
}
