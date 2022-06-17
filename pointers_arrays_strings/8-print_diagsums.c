#include <stdio.h>
/**
 * print_diagsums - prints the sums of the ints in the two diagonals of
 * a two-dimensional square array
 * @a: input two-dimesional square array
 * @size: size of a
 */
void print_diagsums(int *a, int size)
{
	int i, j, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (j == i)
				d1 += a[i][j];
			else if (j == size - i + 1)
				d2 += a[i][j];
		}
	printf("%d, %d", d1, d2);
}
