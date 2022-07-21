#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - computes the sum of all the values in a linked list
 * @head: head of the list
 *
 * Return: aforementioned sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	ptr = head;
	if (head)
		while (ptr)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
	return (sum);
}
