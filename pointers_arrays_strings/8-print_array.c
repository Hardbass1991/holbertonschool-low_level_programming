#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of input array
 * @a: input string
 * @n: input number of elements to print out from input array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
