#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
	list_t *prev;

	prev = malloc(sizeof(list_t));
	if (!prev)
		return (NULL);
	prev->str = strdup(str);
	prev->next = (*head);
	(*head) = prev;
	return (*head);
}
