#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - computes the sum of values from input linked list
 * @head: input linked list
 *
 * Return: aforementioned sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	return (sum);
}
