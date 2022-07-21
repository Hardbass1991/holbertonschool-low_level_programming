#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * dlistint_len - returns number of  elements of a dlistint_t list
 * @h: input dlistint_t
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i += 1;
		h = h->next;
	}
	return (i);
}
