#include "main.h"
#include <string.h>
/**
 * print_binary - prints binary version of input int
 * @n: input int
 */
void print_binary(unsigned long int n)
{
	int unmasker = 1 << 31;
	int i, n_, start = 0;

	n_ = n;
	if (n == 0)
		_putchar('0');
	else
		for (i = 0; i < 64; i++)
		{
			if (unmasker & n_)
			{
				start = 1;
				_putchar('1');
			}
			else
				if (start)
					_putchar('0');
			n_ <<= 1;
		}
}
