#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds node at the beginning of input linked list
 * @head: pointer to first element of list
 * @str: string that will be given as as value to element of list
 *
 * Return: pointer to first element of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *prev;

	prev = malloc(sizeof(list_t));
	if (!prev)
		return (NULL);
	prev->str = strdup(str);
	prev->len = strlen(str);
	prev->next = (*head);
	(*head) = prev;
	return (*head);
}
