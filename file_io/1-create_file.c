#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file - creates a text file and write in it
 * @filename: string with the name of the file to be used
 * @text_content: string to be written in the file
 *
 * Return: 1 if successful, or -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		wr = write(fd, text_content, strlen(filename));
		if (wr < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
