#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two input strings.
 * @s1: first input string.
 * @s2: second input string.
 *
 * Return: a pointer to the genrated array, or NULL if it doesn't work.
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int n, n1 = 0, n2 = 0, i;

	while (s1[n1])
		n1++;
	while (s2[n2])
		n2++;
	n = n1 + n2;
	array = malloc(sizeof(char) * (n + 1));
	if (!array)
		return (NULL);
	for (i = 0; i <= n; i++)
		if (i < n1)
			array[i] = s1[i];
		else
			array[i] = s2[i - n1];
	return (array);
}
