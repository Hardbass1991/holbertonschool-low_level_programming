#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node in index idx  input linked list
 * @head: pointer to input linked list
 * @idx: position where new node will be inserted
 * @n: data to be inserted at new node
 *
 * Return: inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp, *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr = *head;
	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	if (idx == 0)
	{
		if (*head)
			tmp->next = (*head);
		(*head) = tmp;
		return (*head);
	}
	else if (!(*head))
		return (NULL);
	while (ptr->next && i < idx - 1)
	{
		ptr = ptr->next;
		i += 1;
	}
	if (idx > i + 1)
		return (NULL);
	tmp->next = ptr->next;
	ptr->next = tmp;
	return (ptr->next);
}
