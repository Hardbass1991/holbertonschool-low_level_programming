#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints elements from input linked list
 * @h: pointer to linked list
 *
 * Return: number of elements in linked list
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	while (h)
	{
		n += 1;
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (n);
}
