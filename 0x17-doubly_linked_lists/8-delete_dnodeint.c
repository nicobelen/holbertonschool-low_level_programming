#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head of list
 * @index: position to delete node
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->next->prev = NULL;
		free(tmp);
		return (1);
	}

	while (i < index)
	{
		tmp = tmp->next;

		if (tmp == NULL)
			return (-1);
		i++;
	}

	if (tmp->next == NULL)
	{
		tmp->prev->next = NULL;
		free(tmp);
	}
	else
	{
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
	}

	return (1);
}
