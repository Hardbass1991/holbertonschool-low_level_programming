#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: input array to copy
 *
 * Return: a pointer to the genrated array, or NULL if it doesn't work.
 */
char *_strdup(char *str)
{
	char *array;
	int n = 0, i;

	if (str == NULL)
		return (NULL);
	while (str[n])
		n++;
	array = malloc(sizeof(char) * (n + 1));
	if (!array)
		return (NULL);
	for (i = 0; i <= n; i++)
		array[i] = str[i];
	return (array);
}
