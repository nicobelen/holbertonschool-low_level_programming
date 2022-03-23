#include "lists.h"

/**
* insert_nodeint_at_index - check code
* @head: pointer to head of list
* @idx: index where the node should be added
* @n: given position
* Return: adress of newnode
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *newNode;

	tmp = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = tmp;
		*head = newNode;
		return (*head);
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
