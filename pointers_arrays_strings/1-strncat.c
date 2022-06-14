/**
 * *_strncat -  returns the first input string after appending
 * the second input string (up to the n-th character) to the end of it
 * @dest: input string to append content
 * @src: input string to be appended to variable dest
 * @n: cutting point for string to be appended (sizeof(char) = 1)
 *
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
