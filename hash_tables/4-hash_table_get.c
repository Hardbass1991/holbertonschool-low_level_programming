#include <stddef.h>
#include "hash_tables.h"
/**
 * hash_table_get - gets the value that matches an input key
 * @ht: hash able where key will be searched
 * @key: key that will be searched in ht
 *
 * Return: value that matches key if successful, or NUll otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item;
	unsigned long int index;
	
	if(!ht)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	item = (ht->array[index]);
	if (!item)
		return (NULL);
	return (item->value);
}
