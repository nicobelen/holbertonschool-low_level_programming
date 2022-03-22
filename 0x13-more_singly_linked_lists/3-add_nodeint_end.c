#include "lists.h"

/**
* add_nodeint_end - insert node at the end of the list
* @head: pointer to head of list
* @n: constant int
* Return: newNode.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *last = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = newNode;

	return (newNode);
}
