#include <stdio.h>
/**
 * *_strspn - Returns the number of bytes in the initial segment of s 
 * which consist only of bytes from accept
 * @s: input string
 * @accept: input string whose elements' repetitions will be counted in s
 *
 * Return: aforementioned
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i = 0, j = 0;

	while (s[i])
	{
		if (s[i] < 65 || (s[i] > 90 && s[i] < 97) || s[i] > 122)
			break;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				n++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (n);
}
