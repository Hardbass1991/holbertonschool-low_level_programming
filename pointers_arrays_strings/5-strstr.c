#include <stddef.h>
#include <stdio.h>
/**
 * *_strstr - char *_strstr(char *haystack, char *needle)
 * @haystack: input string where input subtring needle will be searched
 * @needle: input substring that will be searched in haystack
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int m = 0, n = 0, i, found = 0;

	while (needle[m])
		m++;
	while (haystack[n])
	{
		/* printf("%s %s\n", &haystack[n], &needle[0]); */
		for (i = 0; i < m; i++)
			if (haystack[n + i] == needle[i])
			{
				found += 1;
				/* printf("GAAA\n");*/
			}
			else
				break;
		if (found)
			break;
		n++;
	}

	if (found)
		return (&haystack[n]);
	else
		return (NULL);
}
