#include <stdio.h>
#include <string.h>
/**
 * main - This script prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
