#include "hash_tables.h"

/**
 * @brief 
 * 
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *tmp = NULL;
    unsigned long int i = 0, com = 0;

    if (ht == NULL)
		return; 

    tmp = malloc(sizeof(hash_node_t));

    if (tmp == NULL)
        return;

    printf("{");
    for (; i < ht->size; i++)
    {
        if (ht->array[i] == NULL)
        {
            i++;
            continue;
        }
        if (com == 1)
            printf(", ");
        com = 1;
        tmp = ht->array[i];
        while (tmp)
        {
            printf("'%s': '%s'", tmp->key, tmp->value);
            if (tmp->next != NULL)
                printf(", ");
            tmp = tmp->next;
        }
    }
    printf("}\n");
}