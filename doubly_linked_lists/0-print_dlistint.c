#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: input dlistint_t
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
