#include "hash_tables.h"

/**
 * @brief 
 * 
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *tmp;
    unsigned long int i = 0;

    for (; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (tmp->next != NULL)
				tmp = tmp->next;
            tmp = NULL;
		}
        free(ht->array[i]);
	}
    free(ht);
}