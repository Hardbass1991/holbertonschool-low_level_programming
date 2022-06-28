#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: input number of elements of array
 * @size: input size of every element
 *
 * Return: generated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char **array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * sizeof(char *));
	if (!array)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		array[i] = malloc(sizae);
		array[i] = 0;
	}
	return (array);
}
