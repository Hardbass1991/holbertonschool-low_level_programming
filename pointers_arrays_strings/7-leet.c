/**
 * *leet - switches characters in input string
 * @a: input string
 *
 * Return: converted string
 */
char *leet(char *a)
{
	int i = 0, j;
	char lo[] = {'a', 'e', 'o', 't', 'l'};
	char up[] = {'A', 'E', 'O', 'T', 'L'};
	char le[] = {'4', '3', '0', '7', '1'};

	while (a[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i] == lo[j] || a[i] == up[j])
				a[i] = le[j];
		}
		i++;
	}
	return (a);
}
