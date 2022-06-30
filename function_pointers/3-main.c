#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	op_t result;
	int i = 0;

	printf("%d\n", argc);
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	if (argc == 4)
	{
		if (!get_op_func(argv[2]))
		{
			printf("Error\n");
			exit(99);
		}
		if (!((strcmp(argv[2], "/") || strcmp(argv[2], "%")) && strcmp(argv[3], "0")))
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
