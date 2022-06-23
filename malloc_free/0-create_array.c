#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of array to create
 * @c: character that will be used to fill the array
 *
 * Return: a pointer to the genrated array, or NULL if it doesn't work.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *array;

	array = malloc(sizeof(c) * size);
	if (!array)
		return (NULL);
	unsigned int i;

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
