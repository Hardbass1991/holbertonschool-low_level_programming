/**
 * reverse_array -  reverses input array
 * @a: input array
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp1, tmp2;

	for (i = 0; i < n / 2; i++)
	{
		tmp1 = a[i];
		tmp2 = a[n - 1 - i];
		a[n - 1 - i] = tmp1;
		a[i] = tmp2;
	}
}
