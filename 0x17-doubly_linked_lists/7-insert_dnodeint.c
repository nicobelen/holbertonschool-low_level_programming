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

	tmp = *h;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
    newNode->prev = NULL;
    newNode->next = NULL;
    

	if (idx == 0)
	{
		newNode->next = tmp;
		*h = newNode;
		return (*h);
	}

	while (idx > 1)
	{
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
