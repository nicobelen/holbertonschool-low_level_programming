#include "lists.h"

/**
* get_nodeint_at_index - returns nth node of a list
* @head: pointer to head of list
* @index: index of the node starting at 0
* Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp;

	tmp = head;

	if (tmp == NULL)
		return (NULL);

	while (tmp != NULL)
	{
		if (count == index)
			return (tmp);
		count++;
		tmp = tmp->next;
	}
	return (tmp);
}
