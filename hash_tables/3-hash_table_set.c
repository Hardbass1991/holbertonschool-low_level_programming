#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
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
	hash_node_t *prev;

	prev = malloc(sizeof(hash_node_t));
	if (!prev)
		return (0);
	prev->key = malloc(strlen(key) + 1);
	strcpy(prev->key, key);
	prev->value = malloc(strlen(value) + 1);
	strcpy(prev->value, value);
	prev->next = (*head);
	(*head) = prev;
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

	/*printf("%s, %s, %ld\n", key, value, ht->size);*/
	index = key_index((unsigned char *)key, ht->size);
	/*printf("index: %ld\n", index);*/
	success = add_node(&(ht->array[index]), key, value);
	/*printf("success: %d\n", success);*/
	return (success);
}
