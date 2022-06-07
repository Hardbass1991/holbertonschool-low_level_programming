#include <stdio.h>
#include <string.h>
/**
 * main - This script prints the numbers from 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
