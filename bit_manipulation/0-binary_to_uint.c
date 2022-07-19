#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * rev_string -  reverses input string
 * @s: input string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int n, i = 0;
	char tmp1, tmp2;

	n = strlen(s);
	for (i = 0; i < n / 2; i++)
	{
		tmp1 = s[i];
		tmp2 = s[n - 1 - i];
		s[n - 1 - i] = tmp1;
		s[i] = tmp2;
	}
}

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: input binary
 *
 * Return: result of conversion
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i = 0, j, twos = 1;
	char *b_;

	if (!b)
		return (0);
	b_ = malloc(strlen(b) + 1);
	for (j = 0; j <= strlen(b); j++)
		b_[j] = b[j];
	rev_string(b_);
	while (b_[i])
	{
		if (b_[i] != '0' && b_[i] != '1')
			return (0);
		else if (b_[i] == '1')
		{
			for (j = 0; j < i; j++)
				twos *= 2;
			num += twos;
			twos = 1;
		}
		i++;
	}
	free(b_);
	return (num);
}
