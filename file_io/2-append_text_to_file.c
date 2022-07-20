#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - appends input string to existing file
 * @filename: string with the name of the file to be used
 * @text_content: string to be written in the file
 *
 * Return: 1 if successful, or -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		wr = write(fd, text_content, strlen(text_content));
		if (wr < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
