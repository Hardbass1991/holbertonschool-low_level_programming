#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - pops node from beginning of input linked list
 * @head: pointer to input linked list
 *
 * Return: value of element popped, or 0 if it fails
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int tmp_n;

	if (!(*head))
		return (0);
	tmp = (*head);
	tmp_n = tmp->n;
	(*head) = (*head)->next;
	return (tmp_n);
}
