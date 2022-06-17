#include <stddef.h>
#include <stdio.h>
/**
 * *_strpbrk - char *_strpbrk(char *s, char *accept)
 * @s: input string where the character will be searched
 * @accept: input string whose each of whose characters will be searched
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, n = 0, found = 0;

	while (s[n])
		n++;
	for (i = 0; i <= n; i++)
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found)
			break;
		j = 0;
	}
	if (!found)
		return (NULL);
	else
		return (&s[i]);
}
