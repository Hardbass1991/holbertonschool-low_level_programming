/**
 * *_strcat -  returns a the first input string after appending
 * the second input string to the end of it
 * @dest: input string to append content
 * @src: input string to be appended to variable dest
 *
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
