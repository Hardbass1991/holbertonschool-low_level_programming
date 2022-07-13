#include <stdio.h>
#include "lists.h"
/** print_listint - prints int values in a linked list
 * @h: input linked list
 *
 * Return: number of elements in input list
 */
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
