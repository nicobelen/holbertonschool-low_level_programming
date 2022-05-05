#include "lists.h"
/**
* add_dnodeint_end - insert node at the end of the list
* @head: pointer to head of list
* @n: constant int
* Return: newNode.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *last = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		newNode->prev = NULL;
		return (newNode);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = newNode;

	newNode->prev = last;

	return (newNode);
}
