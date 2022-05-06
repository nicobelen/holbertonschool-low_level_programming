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
	dlistint_t *tmp, *newnode;

	tmp = *h;
	newnode = malloc(sizeof(dlistint_t));

	if (!h)
		return (NULL);
	if (!newnode)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (idx > 1)
	{
		tmp = tmp->next;
		idx--;
		if (tmp == NULL)
		{
			free(newnode);
			return (NULL);
		}
		if (tmp->next == NULL)
		{
			free(newnode);
			return (add_dnodeint_end(h, n));
		}
	}
	newnode->next = tmp->next;
	newnode->prev = tmp;
	tmp->next->prev = newnode;
	tmp->next = newnode;
	return (newnode);
}
