/**
 * *_strcmp -  compares whether two strings are equal
 * @s1: first input string
 * @s2: second input string
 *
 * Return: 0 if both string are equal.
 * A positive number if the first different character is larger
 * (in ASCII) in s1 than in s2.
 * A negative number otherwise.
 */
char _strcmp(char *s1, char *s2)
{
	int i = 0, dif = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			dif = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (dif);
}
