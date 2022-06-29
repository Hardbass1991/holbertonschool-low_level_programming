#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (!get_op_func(argv[1]))
		{
			printf("Error\n");
			exit(99);
		}
		if ((argv[2] == "/" || argv[2] == "%") && argv[3] == "0")
		{
			printf("Error\n");
			exit(100);
		}
		return (get_op_func(argv[1]));
	}	
	else
	{
		printf("Error\n");
		exit(98);
	}
}
