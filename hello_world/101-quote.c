#include <stdio.h>
/**
 * main - prints out a string
 *
 * Return: 1
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	while (text[i] != '\0')
	{
		putchar(text[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
