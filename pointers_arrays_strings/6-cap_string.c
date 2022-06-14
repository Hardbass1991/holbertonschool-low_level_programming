/**
 * *cap_string - capitalizes all the words in the input string
 * @a: input string
 *
 * Return: converted string
 */
char *cap_string(char *a)
{
	int i = 0, j = 0, n = 0, is_sep = 0;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"'};

	while (a[n])
		n++;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 9; j++)
			if (a[i] == sep[j])
			{
				is_sep = 1;
				break;
			}

		if (is_sep == 1 && a[i + 1] >= 'a' && a[i + 1] <= 'z')
			a[i + 1] -= 32;
		is_sep = 0;
	}
	return (a);
}
