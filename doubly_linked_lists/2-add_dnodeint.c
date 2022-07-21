#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head of the list
 * @n: value to be given to the new node
 *
 * Return: pointer to new element, or NULL if process failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;
	if (*head)
		(*head)->prev = new_node;
	(*head) = new_node;
	return (*head);
}
