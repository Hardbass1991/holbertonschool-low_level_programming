#include "main.h"
/**
 * print_diagonal - prints '\' an input n number of times, in different lines
 * @n: input number of times to print string
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		/* 92 is the ASCII code for '\'*/
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
