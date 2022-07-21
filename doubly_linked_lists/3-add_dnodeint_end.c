#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the list
 * @n: value to be given to the new node
 *
 * Return: pointer to new element, or NULL if process failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		(*head) = new_node;
		return (*head);
	}
	last = (*head);
	while (last->next)
		last = last->next;
	new_node->prev = last;
	last->next = new_node;
	return (last->next);
}
