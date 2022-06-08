#include "main.h"
/**
 * print_sign - prints the sign of an input number
 * @n: input number
 *
 * Return: 1, if input > 0, 0 is input = 0, and -1 if input < 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
