#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of hash table (number of nodes)
 *
 * Return: newly created hash table, or NULL if process fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (!new_hash_table)
		return (NULL);

	new_hash_table->array = malloc(size * 8);
	if (!new_hash_table->array)
		return (NULL);
	return (new_hash_table);
}
