#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
		{
			unsigned long int num = atoi(argv[i]);
			char str[12];

			sprintf(str, "%ld", num);
			if (strlen(argv[i]) != strlen(str))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
