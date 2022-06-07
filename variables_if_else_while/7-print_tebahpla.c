#include <stdio.h>
#include <string.h>
/**
 * main - This script prints the alphabet in lowercase andin reverse
 *
 * Return: 0
 */
int main(void)
{
	char alph;

	alph = 'z';
	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
