/**
 * swap_int -  swaps the values of two ints whose pointers are
 * given as inputs
 * @a: first input pointer
 * @b: second input pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
