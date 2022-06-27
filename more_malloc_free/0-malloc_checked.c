#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: input size of malloc
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b * sizeof(char));
	if (!ptr)
		exit(98);
	return (ptr);
}
