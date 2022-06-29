/**
 * int_index - searches for an integer
 * @array: input array where the integer will be searched
 * @size: size of array
 * @cmp: pointer to function according to which the integer will be searched
 *
 * Return: position of first found int in array, or -1 if this fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret = -1;

	if (array && cmp)
	{
		if (size <= 0)
			return (ret);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
			{
				ret = i;
				break;
			}
	}
	return (ret);
}
