/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: input array that is modified
 * @src: input array based on whose elements dest is modified
 * @n: number of initial characters of dest that will be modified
 *
 * Return: pointer to modified array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
