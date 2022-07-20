#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to input lu
 * @index: position at which a 0 will be placed
 *
 * Return: 1 if it worked, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one = 1;

	if (index >= sizeof(*n) * 8)
		return (-1);
	one <<= index;
	*n = (*n & ~one);
	return (1);
}
