#include "lists.h"

/**
* delete_nodeint_at_index - Deletes node at index
* @head: pointer to head of list
* @index: position to delete
* Return: 1 if succeeded or -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *del;
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
