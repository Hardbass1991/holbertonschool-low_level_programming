#include "main.h"
/**
 * _isupper - Checks if input int is uppercase
 * @c: input int
 *
 * Return: 1 if input is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
