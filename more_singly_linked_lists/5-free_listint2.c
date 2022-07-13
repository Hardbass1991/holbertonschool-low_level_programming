#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees an input linked list.
 * @head: pointer to input linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *curr_node;

	if (!head)
		return;
	while (*head)
	{
		curr_node = *head;
		*head = (*head)->next;
		free(curr_node);
	}
	*head = NULL;
}
