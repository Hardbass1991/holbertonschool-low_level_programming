#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: string with the name of the file to be used
 * @letters: number of characters that will be read and printed out
 *
 * Return: number of characters successfully read and printed out
 * Or 0 if anything fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buf;

	buf = malloc(letters + 1);

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY, 0400);
	if (fd < 0)
		return (0);
	rd = read(fd, buf, letters);
	if (rd < 0)
		return (0);
	buf[letters] = '\0';
	wr = write(1, buf, rd);
	if (wr < 0)
		return (0);
	close(fd);
	return (wr);
}
