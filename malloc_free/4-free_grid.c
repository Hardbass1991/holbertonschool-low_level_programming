#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by the
 * alloc_grid function.
 * @grid: input grid whose memory allocation will be freed
 * @height: number of rows of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
		free(grid[i++]);
	free(grid);
}
