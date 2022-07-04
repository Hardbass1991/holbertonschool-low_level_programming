#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: input string that will be used as separator
 * @n: number of ints that will be given as input
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (!separator)
		separator = "";
	if (n > 0)
	{
		va_start(ap, n);
		printf("%d", va_arg(ap, int));
		for (i = 1; i < n; i++)
			printf("%s%d", separator, va_arg(ap, int));
		va_end(ap);
	}
	printf("\n");
}
