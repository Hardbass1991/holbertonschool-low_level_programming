#include "main.h"
/**
 * print_triangle - prints a triangle made from '#'
 * @size: input size of the triangle (number of lines to print out)
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(' ');
		for (k = 1; k <= i; k++)
			/* 35 is the ASCII code for '#'*/
			_putchar(35);
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
