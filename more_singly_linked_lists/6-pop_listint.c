#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int tmp_n;

	if (!head)
		return (0);
	tmp = (*head);
	tmp_n = (*head)->n;
	free(tmp);
	(*head) = (*head)->next;
	return (tmp_n);
}
