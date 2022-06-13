#include "main.h"
/**
 * _isdigit - Checks whether input int is a digit 0-9
 * @c: input int
 *
 * Return: 1 if input is uppercase, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
