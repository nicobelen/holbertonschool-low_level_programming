#include "lists.h"

/**
* add_nodeint -  dd node at beginning of the list
* @head: pointer to head of list
* @n: constant int
* Return: newNode.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
