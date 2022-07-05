#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_all - prints everyargument passe according to input format string
 * @format: input format string
 */
void print_all(const char * const format, ...)
{
	int i = 0, n, val_char;
	va_list ap;
	char *tmp;

	n = strlen(format);
	va_start(ap, format);
	while (format && i < n)
	{
		val_char = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				val_char = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				val_char = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				val_char = 1;
				break;
			case 's':
				tmp = va_arg(ap, char*);
				if (!tmp)
					tmp = "(nil)";
				printf("%s", tmp);
				val_char = 1;
				break;
		}
		if (i < n - 1 && val_char)
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
