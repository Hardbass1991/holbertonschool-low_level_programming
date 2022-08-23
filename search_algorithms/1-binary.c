#include <stddef.h>
#include <stdio.h>
/**
 * print_array - prints an array
 * @array: input array
 * @from: first element to be printed out
 * @to: last element to be printed out
 */
void print_array(int *array, int from, int to)
{
	int i, j = 0;

	printf("Searching in array: ");
	for (i = from; i <= to; i++)
	{
		if (j)
			printf(", ");
		printf("%d", array[i]);
		j++;
	}
	printf("\n");
}
/**
 * binarysearch - performs a binary search
 * @array: input array
 * @size: size of array
 * @a1: lower limit of input interval
 * @a2: upper limit of input interval
 * @value: value that will be searched
 *
 * Return: index where value was found, or -1 if search failed
 */
int binarysearch(int *array, size_t size, int a1, int a2, int value)
{
	int m = ((a2 - a1) / 2) + a1;

	print_array(array, a1, a2);
	/*printf("a1: %d, a2: %d, m: %ld\n", a1, a2, m);*/
	if (a1 != a2)
	{
		if (array[m] > value)
		{
			a2 = m - 1;
			return (binarysearch(array, size, a1, a2, value));
		}
		else if (array[m] < value)
		{
			a1 = m + 1;
			return (binarysearch(array, size, a1, a2, value));
		}
		else
			return (m);
	}
	else
	{
		if (array[a1] != value)
			return (-1);
		else
			return (a1);
	}
}
/**
 * binary_search - performs a binary search
 * @array: input array
 * @size: size of array
 * @value: value that will be searched
 *
 * Return: index where value was found, or -1 if search failed
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binarysearch(array, size, 0, size - 1, value));
}
