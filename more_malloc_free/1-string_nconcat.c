#include <string.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: first input string
 * @s2: second input string (only first n characters will be used)
 * @n: number of characters from s2 that will be used
 *
 * Return: generated array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size, size1 = 0, size2 = 0, i = 0;
	char *str;

	if (s1)
		size1 = strlen(s1);
	if (s2)
		size2 = strlen(s2);
	size = size1 + size2 + 1;
	str = malloc(size);
	if (!str)
		return (NULL);
	if (s1)
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
	if (s2)
		while (s2[i - size1])
		{
			if (i - size1 == n)
				break;
			str[i] = s2[i - size1];
			i++;
		}
	str[i] = '\0';
	return (str);
}
