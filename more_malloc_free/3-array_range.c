#include <stddef.h>
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: first element of array to create
 * @max: last element of array to create
 *
 * Return: generated array
 */
int *array_range(int min, int max)
{
	int *range;
	int n, i;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	range = malloc(n * sizeof(int));
	if (!range)
		return (NULL);
	for (i = 0; i < n; i++)
		range[i] = min + i;
	return (range);
}
