#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns n node of input linked list
 * @head: pointer to input linked list
 * @index: position of node that will be returned
 *
 * Return: n-th node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head->next && i < index)
	{
		head = head->next;
		i += 1;
	}
	if (index > i)
		return (NULL);
	return (head);
}
