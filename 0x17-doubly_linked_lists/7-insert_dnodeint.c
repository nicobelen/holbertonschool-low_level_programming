#include "lists.h"

/**
* insert_dnodeint_at_index - check code
* @h: pointer to head of list
* @idx: index where the node should be added
* @n: given position
* Return: adress of newnode
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *newNode;

    if (!h)
        return (NULL);

	tmp = *h;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
    newNode->prev = NULL;
    newNode->next = NULL;
    

	if (idx == 0)
	{
		return (add_dnodeint(h, idx))
	}

	while (idx > 1)
	{
        if (tmp->next == NULL)
        {
            free(newNode);
            return (add_dnodeint_end(h, n));
        }
		tmp = tmp->next;
		idx--;

		if (tmp == NULL)
		{
			free(newNode);
			return (NULL);
		}
	}

	newNode->next = tmp->next;
	tmp->next = newNode;

	return (newNode);
}