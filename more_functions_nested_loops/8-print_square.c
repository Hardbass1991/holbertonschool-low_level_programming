#include "main.h"
/**
 * print_square - prints '#' an input n times per line, in n lines
 * @size: input number of times to print '#'
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			/* 35 is the ASCII code for '\'*/
			_putchar(35);
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
