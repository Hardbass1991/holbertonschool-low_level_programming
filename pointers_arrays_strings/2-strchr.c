#include <stddef.h>
#include <stdio.h>
/**
 * *_strchr - locates a character in a string.
 * @s: input array where the character will be searched
 * @c: input character that will be searched in s
 *
 * Return: pointer to the first occurrence of the character c in the string
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0, found = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			found = 1;
			break;
		}
		i++;
	}
	if (!found)
		return (NULL);
	else
		return (&s[i]);
}
