#include <stdio.h>
#include "lists.h"
/**
 * listint_len - computes number of items in a linked list
 * @h: input linked list
 *
 * Return: number of elements in input list
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		n += 1;
		h = h->next;
	}
	return (n);
}
