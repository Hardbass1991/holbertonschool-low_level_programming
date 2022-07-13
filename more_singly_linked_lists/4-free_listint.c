#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees an input linked list.
 * @head: pointer to input linked list
 */
void free_listint(listint_t *head)
{
	listint_t *curr_node;

	while (head)
	{
		curr_node = head;
		head = head->next;
		free(curr_node);
	}
}
