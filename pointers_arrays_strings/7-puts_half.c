#include "main.h"
/**
 * puts_half -  prints every other character of input string
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n, i;

	n = 0;
	i = 0;
	while (str[n])
		n++;
	if (n % 2 == 0)
		for (i = n / 2; i < n; i++)
			_putchar(str[i]);
	else
		for (i = n / 2 + 1; i < n; i++)
			_putchar(str[i]);
	_putchar('\n');
}
