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
	unsigned long int unmasker = 1UL << 63, n_;
	unsigned int i, j, start = 0, N = 0;
	int binary[65];

	n_ = n;
	if (n == 0)
	{
		binary[0] = 0;
		printf("%d\n", binary[0]);
		N += 1;
	}
	else
		for (i = 0; i < 64; i++)
		{
			if (unmasker & n_)
			{
				start = 1;
				binary[i] = 1;
				printf("%d ", binary[i]);
				N += 1;
			}
			else
				if (start)
				{
					binary[i] = 0;
					N += 1;
					printf("%d ", binary[i]);
				}
			n_ <<= 1;
		}
	printf("\n");
	if (index >= N)
		return (-1);
	for (j = 0; j < N; j++)
		printf("%d ", binary[j]);
	printf("\n");
	return (binary[N - index]);
}

