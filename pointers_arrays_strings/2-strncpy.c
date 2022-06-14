/**
 * *_strncpy -  returns the first input string after replacing
 * the n first characters with the n first characters of
 * the second input string
 * @dest: input string where characters will be replaced
 * @src: input string whose characters will be used to replace
 * other characters in the dest input string
 * @n: number of characters tha will be replaced
 *
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
