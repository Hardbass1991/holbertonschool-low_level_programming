#include <stdio.h>
/**
 * rev_string -  reverses input string
 * @s: input string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int n = 0, i = 0;
	char tmp1, tmp2;

	while (s[n])
	{
		n++;
	}
	for (i = 0; i < n / 2; i++)
	{
		tmp1 = s[i];
		tmp2 = s[n - 1 - i];
		s[n - 1 - i] = tmp1;
		s[i] = tmp2;
	}
}
