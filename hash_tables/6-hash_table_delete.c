#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: input hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	int i, n;
	hash_node_t *item;

	n = 1024;
	for (i = 0; i < n; i++)
	{
		item = ht->array[i];
		if (item)
		{
			printf("%d\n", i);
			free(item->key);
			free(item->value);
		}
		free(item);
	}
	free(ht);
}
