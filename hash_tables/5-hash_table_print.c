#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - prints out elements of a hash table
 * @ht: input hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	int i, j = 0, n;
	hash_node_t *item;

	n = 1024;

	if (!ht)
		return;
	/*printf("%d\n", n);*/
	putchar('{');
	for (i = 0; i < n; i++)
	{
		item = ht->array[i];
		if (item)
		{
			if (j)
				printf(", ");
			printf("\'%s\': \'%s\'", item->key, item->value);
			j++;
		}
	}
	printf("}\n");
}
