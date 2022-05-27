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
	int iter = 0;

	if (key == NULL)
		return (0);

	ht = malloc(sizeof(hash_table_t) * 1);

	if (ht == NULL)
		return (0);

	index = hash_djb2((const unsigned char *) key);

	for (; ht->array[iter] <= ht->array[index]; iter++)
	{
		if (strcmp(ht->array[iter]->key, ht->array[index]->key) == 0)
		{
			ht->array[index]->value = auxvalue;
			return (1);
		}
		ht->array[0]->key = (char *) key;
		ht->array[0]->value = auxvalue;
	}

	return (1);
}
