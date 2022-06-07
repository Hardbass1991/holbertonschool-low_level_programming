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
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	alph = 'a';
	for (alph = 'a'; alph < 'f' + 1; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
