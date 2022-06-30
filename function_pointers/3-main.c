#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - command performs basic arithmetic operations relying on
 * other functions
 * @argc: argc
 * @argv: argv
 *
 * Return: result of operation
 */
int main(int argc, char *argv[])
{
	op_t result;

	if (argc == 4)
	{
		if (!get_op_func(argv[2]))
		{
			printf("Error\n");
			exit(99);
		}
		if (!(((argv[2][0] != '/') || strcmp(argv[2], "%")) && strcmp(argv[3], "0")))
		{
			printf("Error\n");
			exit(100);
		}
		result.op = argv[2];
		result.f = get_op_func(argv[2]);
		printf("%d\n", result.f(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
