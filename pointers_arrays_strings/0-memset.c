/**
 * *_memset - fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: input array
 * @b: input char to replicate
 * @n: number of initial characters of s that will be replaced with b
 *
 * Return: pointer to modified array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
