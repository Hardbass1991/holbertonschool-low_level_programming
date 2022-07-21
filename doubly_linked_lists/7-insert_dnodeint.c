#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node in index idx input linked list
 * @h: pointer to input linked list
 * @idx: position where new node will be inserted
 * @n: data to be inserted at new node
 *
 * Return: inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp, *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (!ptr)
		return (NULL);
	ptr = *h;
	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	if (idx == 0)
	{
		tmp->next = (*h);
		tmp->prev = NULL;
		if (*h)
			(*h)->prev = tmp;
		(*h) = tmp;
		return (*h);
	}
	else if (!(*h))
		return (NULL);
	while (ptr->next && i < idx - 1)
	{
		ptr = ptr->next;
		i += 1;
	}
	if (idx > i + 1)
		return (NULL);
	tmp->next = ptr->next;
	tmp->next->prev = tmp;
	tmp->prev = ptr;
	ptr->next = tmp;
	return (ptr->next);
}
