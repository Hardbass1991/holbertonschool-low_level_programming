/**
 * *_strcpy -  returns a pointer that contains an input string
 * @dest: input empty string to store content
 * @src: input content to store in empty variable dest
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
