#include <stdio.h>
#include "lists.h"
size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		n += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
