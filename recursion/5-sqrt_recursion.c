#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input int
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
	{
		return (binary_search(2, n, n));
	}
}

int binary_search(int a1, int a2, int n)
{
	int m = ((a2 - a1) / 2) + a1;
	
	if (a1 != a2)
	{
		if (m * m > n)
		{
			a2 = m - 1;
			return (binary_search(a1, a2, n));
		}
		else if (m * m < n)
		{
			a1 = m + 1;
			return (binary_search(a1, a2, n));
		}
		else
			return (m);
	}
	else
	{
		if (m * m != n)
			return (-1);
		else
			return (m);
	}
}
