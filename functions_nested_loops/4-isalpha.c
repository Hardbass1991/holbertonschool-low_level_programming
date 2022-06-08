#include "main.h"
/**
 * _isalpha - Tells whether input char is an alphabetic character
 * @c: input character
 *
 * Return: 1 if input char is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
