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
	hash_node_t *nwElm, *aux;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	nwElm = malloc(sizeof(hash_node_t));

	if (nwElm == NULL)
		return (0);

	for (aux = ht->array[index]; aux; aux = aux->next)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = auxvalue;
			free(nwElm);
			return (1);
		}
	}
	nwElm->key = key;
	nwElm->value = auxvalue;
	nwElm->next = ht->array[index];
	ht->array[index] = nwElm;

	return (1);
}
