#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: first dimension of array
 * @height: second dimesion of array
 *
 * Return: a pointer to the generated array, or NULL if it doesn't work.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (height <= 0 || width <= 0)
		return (NULL);
	array = (int **)malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
		array[i] = (int *)malloc(width * sizeof(int));
	if (!array)
	{
		for (i = 0; i < height; i++)
			free(array[i]);
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	return (array);
}
