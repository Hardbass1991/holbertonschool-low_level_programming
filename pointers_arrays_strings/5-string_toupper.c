/**
 * *string_toupper -  changes every character in a string to uppercase
 * @a: input array
 *
 * Return: converted string
 */
char *string_toupper(char *a)
{
	int i = 0, n = 0;

	while (a[n])
		n++;

	for (i = 0; i < n; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
	}
	return (a);
}
