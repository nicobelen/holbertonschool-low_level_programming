#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
    hash_node_t *aux;

	hash_table_t *hashtable = malloc(sizeof(hash_table_t) * 1);

	if (hashtable == NULL)
		return (NULL);

    aux = malloc(sizeof(hash_node_t));
	
	hashtable->array = malloc(sizeof(hashtable->array) * size);

	while (hashtable->array[i] != NULL)
	{
        aux = hashtable->array[i];
        aux = aux->next;
		free(aux);
	}

	return (hashtable);
}
