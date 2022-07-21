#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns a node whose index is given as input
 * @head: head of the list
 * @index: position of the node that will be returned
 *
 * Return: node at input index of linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	ptr = head;
	while (ptr->next && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (index > i)
		return (NULL);
	return (ptr);
}
