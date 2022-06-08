#include "main.h"
/**
 * _islower - Tells whether input char is lowercase
 * @c: input letter
 *
 * Return: 1 if input char is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
