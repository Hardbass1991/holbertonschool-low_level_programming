#include <stdio.h>
#include "main.h"
/**
 * main - Prints "_putchar"
 *
 * Return: 0
 */
int main(void)
{
	char text[] = "_putchar";
	int n, i;

	n = sizeof(text) / sizeof(text[0]);
	for (i = 0; i < n; i++)
	{
		_putchar(text[i]);
	}
	return (0);
}
