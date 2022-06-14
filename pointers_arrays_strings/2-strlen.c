/**
 * _strlen -  returns the length of input string
 * @s: string pointer
 *
 * Return: length of string whose pointer was given as input
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
