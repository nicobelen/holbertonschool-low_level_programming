#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht:  is the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *auxvalue = strdup(value);

	if (key == NULL)
		return (0);

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (0);

	index = hash_djb2((const unsigned char *) key);

	while (ht->array[index]->key != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			ht->array[index]->value = auxvalue;
			return (1);
		}
	}
	ht->array[index]->key = key;
	ht->array[index]->value = auxvalue;

	return (1);
}
