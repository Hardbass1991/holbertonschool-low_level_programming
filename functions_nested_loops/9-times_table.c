#include "main.h"
/**
 * times_table - prints the 9 time table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
		for (j = 1; j <= 9; j++)
		{
			n = i * j;
			if (n < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + n);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
