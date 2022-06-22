#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0, or 1 if there is invalid input
 */
int main(int argc, char *argv[])
{
	int i, n = 1, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
			n++;
	}
	if (n != argc)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			sum += atoi(argv[i]);
		printf("%d\n", sum);
	}
	return (0);
}
