#include "hash_tables.h"
/**
 * key_index - generates an index for an input string key
 * @key: input string key
 * @size: size of array where key will be stored
 *
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

