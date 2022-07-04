#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns a sum of all the ints given as input
 * @n: number of ints that will be given as input
 *
 * Return: sum of input integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
