#include <stdio.h>
/**
 * main - prints all arguments it receives, followed by a new line.
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
