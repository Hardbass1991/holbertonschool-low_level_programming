#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees every node in input linked list
 * @head: input list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		tmp->len = 0;
		tmp->str = NULL;
		free(tmp);
	}
}
