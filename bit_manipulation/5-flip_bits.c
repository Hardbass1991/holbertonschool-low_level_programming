/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one input number to the other
 * @n: first input number
 * @m: second input number
 *
 * Return: number of required flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, one = 1;
	int i, flips = 0;

	xor = n ^ m;
	for (i = 0; i < 64; i++)
	{
		if (xor & one)
			flips += 1;
		one <<= 1;
	}
	return (flips);
}
