#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to input lu
 * @index: position at which an 1 will be placed
 *
 * Return: altered number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one = 1;

	if (index >= sizeof(*n) * 8)
		return (-1);
	one <<= index;
	*n = (*n | one);
	return (1);
}
