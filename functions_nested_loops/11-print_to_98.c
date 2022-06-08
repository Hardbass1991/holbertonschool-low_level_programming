#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a '\n'
 * @i: input integer
 *
 * Return: void
 */
void print_to_98(int i)
{
	if (i < 98)
	{
		while (i < 98)
		{
			printf("%d, ", i);
			i++;
		}
	}
	else
	{
		while (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
	}
	printf("%d\n", 98);
}
