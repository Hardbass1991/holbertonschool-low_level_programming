#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: input long
 * @index: input index
 *
 * Return: value of the bit at input index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int unmasker = 1UL, n_;

	n_ = n;
	if (index >= sizeof(unmasker) * 8)
		return (-1);

	n_ >>= index;
	if (n_ & unmasker)
		return (1);
	else
		return (0);
}

