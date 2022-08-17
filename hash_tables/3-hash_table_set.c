#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * delete_last - deletes a node in input index of linked list
 * @head: pointer to input linked list
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int delete_last(hash_node_t **head)
{
	hash_node_t *ptr;

	if (!(*head))
		return (0);
	ptr = malloc(sizeof(hash_node_t));
	if (!ptr)
		return (0);
	ptr = (*head);
	ptr->next = ptr->next->next;
	return (1);
}
/**
 * add_node - adds node at the beginning of a linked list
 * @head: pointer to head of list
 * @key: attribute key
 * @value: attribute value
 *
 * Return: 1 if successful, 0 otherwise
 */
int add_node(hash_node_t **head, const char *key, const char *value)
{
	int deleted;
	hash_node_t *prev;

	prev = malloc(sizeof(hash_node_t));
	if (!prev)
		return (0);
	prev->key = malloc(strlen(key) + 1);
	if (!prev->key)
		return (0);
	strcpy(prev->key, key);
	prev->value = malloc(strlen(value) + 1);
	if (!prev->value)
		return (0);
	strcpy(prev->value, value);
	prev->next = (*head);
	(*head) = prev;
	if ((*head)->next && !strcmp((*head)->key, (*head)->next->key))
	{
		deleted = delete_last(head);
		if (!deleted)
			return (0);
	}
	return (1);
}
/**
 * hash_table_set - adds elements to hash table
 * @ht: input hash table
 * @key: input key attribute
 * @value: input value attribute
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int success = 0;
	unsigned long int index;

	if (!ht)
		return (success);

	/*printf("%s, %s, %ld\n", key, value, ht->size);*/
	index = key_index((unsigned char *)key, ht->size);
	/*printf("index: %ld\n", index);*/
	success = add_node(&(ht->array[index]), key, value);
	/*printf("success: %d\n", success);*/
	return (success);
}
