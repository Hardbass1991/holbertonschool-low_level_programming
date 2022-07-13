#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of an input linked list.
 * @head: pointer to input linked list
 * @n: value of node that will be added
 *
 * Return: pointer to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		(*head) = new_node;
		return (*head);
	}
	last = *head;
	while (last->next)
		last = last->next;
	last->next = new_node;
	return (last->next);
}
