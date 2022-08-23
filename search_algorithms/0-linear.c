#include <stdio.h>
/**
 * linear_search - performs a linear search
 * @array: input array
 * @size: size of array
 * @value: value to be searched in array
 *
 * Return: index where value is, or -1 if search failed
 */
int linear_search(int *array, size_t size, int value)
{
	int i, size_, not_found = -1;

	size_ = (int)size;
	if (!array)
		return (-1);
	for (i = 0; i < size_; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			not_found = 0;
			break;
		}
	}
	if (not_found)
		return (not_found);
	return (i);
}
