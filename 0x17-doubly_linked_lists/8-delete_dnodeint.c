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
	dlistint_t *del;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		tmp = tmp->next;

		if (tmp == NULL)
			return (-1);

		i++;
	}

	del = tmp->next;
	tmp->next = del->next;
	free(del);

	return (1);
}
