#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array.
 * @array: input array of values to be used
 * @size: size of array
 * @action: pointer to function that will be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
