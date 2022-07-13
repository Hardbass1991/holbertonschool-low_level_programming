#include "lists.h"
#include <stdio.h>
/**
 * list_len - computes number of elements from input linked list
 * @h: pointer to linked list
 *
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		n += 1;
		h = h->next;
	}
	return (n);
}
