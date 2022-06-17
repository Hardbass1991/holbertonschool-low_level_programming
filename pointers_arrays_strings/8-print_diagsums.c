#include <stdio.h>
/**
 * print_diagsums - prints the sums of the ints in the two diagonals of
 * a two-dimensional square array
 * @a: input two-dimesional square array
 * @size: size of a
 */
void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size * size; i+= size + 1)
	{
		d1 += a[i];
	}
	for (i = size - 1; i < size * size - 1; i+= size - 1)
	{
		d2 += a[i];
	}
	printf("%d, %d\n", d1, d2);
}
