#include "main.h"
/**
 * print_line - prints "_" an input n number of times
 * @n: input number of times to print string
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		/* 95 is the ASCII code for "_"*/
		_putchar(95);
	}
	_putchar('\n');
}
