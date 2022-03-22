#include "lists.h"

/**
* pop_listint - Deletes head node
* @head: pointer to head of list
* Return: data(n) of head node
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	unsigned int ad;

	if (head == NULL)
		return (0);

	tmp = *head;
	ad = (*head)->n;

	*head = tmp->next;
	free(tmp);

	return (ad);
}
