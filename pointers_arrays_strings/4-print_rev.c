#include "main.h"
/**
 * print_rev -  prints input string in reverse
 * @s: input string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int n = 0, i = 0;

	while (s[n])
	{
		n++;
	}
	for (i = 1; i <= n; i++)
		_putchar(s[n - i]);
	_putchar('\n');
}
