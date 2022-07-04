#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: input string that will be used as separator
 * @n: number of strings that will be given as input
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *a;

	if (!separator)
		separator = "";
	if (n > 0)
	{
		va_start(ap, n);
		printf("%s", va_arg(ap, char*));
		for (i = 1; i < n; i++)
		{
			a = va_arg(ap, char*);
			if (!a)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, a);
		}
		va_end(ap);
	}
	printf("\n");
}
