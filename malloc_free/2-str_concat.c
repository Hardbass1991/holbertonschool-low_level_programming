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
	int n, n1 = 0, n2 = 0, i = 0;

	if (s1 != NULL)
		while (s1[n1])
			n1++;
	if (s2 != NULL)
		while (s2[n2])
			n2++;
	n = n1 + n2;
	array = malloc(sizeof(char) * (n + 1));
	if (!array)
		return (NULL);
	if (n1)
		for (i = 0; i < n1; i++)
			array[i] = s1[i];
	if (n2)
		for (i = n1; i < n1 + n2; i++)
			array[i] = s2[i - n1];
	array[i] = '\0';
	return (array);
}
