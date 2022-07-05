#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
void print_all(const char * const format, ...)
{
	int i = 0, n;
	char *f, *fmt;
	va_list ap;

	n = strlen(format);
	f = malloc(n + 1);
	strcpy(f, format);
	fmt = malloc(3);

	va_start(ap, format);
	while (i < n)
	{
		if (f[i] == 'c' || f[i] == 'f' || f[i] == 'i' || f[i] == 's')
		{
			if (i)
				printf(", ");
			fmt[0] = '%';
			fmt[1] = f[i];
			fmt[2] = '\0';
			printf(fmt, va_arg(ap, char*));
		}
		i++;
	}
	printf("\n");
}
