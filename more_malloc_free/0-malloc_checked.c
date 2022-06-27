#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b * sizeof(char));
	if (!ptr)
		exit(98);
	return (ptr);
}
