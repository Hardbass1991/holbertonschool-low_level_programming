#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: input int
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n == (-1))
		return (0);
	else if (n == 2 || n == (-2))
		return (1);
	else
		return (is_n_prime(n, n / 2));
}

/**
 * is_n_prime - checks if n is prime, for every divisor i
 * @n: input number to be analized
 * @i: input divisor used to check
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_n_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_n_prime(n, i - 1));
}
