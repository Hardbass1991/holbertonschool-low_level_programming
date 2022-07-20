#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int fd_1, rd, fd_2, wr, cl_1, cl_2;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	fd_1 = open(argv[1], O_RDONLY, 0400);
	if (fd_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	buf = malloc(1025);
	rd = read(fd_1, buf, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	buf[1024] = '\0';

	fd_2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}
	wr = write(fd_2, buf, rd);
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}
	cl_1 = close(fd_1);
	if (cl_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit (100);
	}
	cl_2 = close(fd_2);
	if (cl_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2);
		exit (100);
	}
	return (0);
}
