#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash tqable to look in to
 * @key: key to look for
 * Return: value associeted to the key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *iter;
	unsigned long int index;

	iter = malloc(sizeof(hash_node_t *));

	if (iter == NULL || ht == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);

	for (iter = ht->array[index]; iter; iter = iter->next)
	{
		if (strcmp(iter->key, key) == 0)
			return (iter->value);
	}

	return (NULL);
}
