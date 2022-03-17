#include "lists.h"

/**
* add_node_end - insert node at the end of the list
* @head: pointer to head of list
* @str: string recieved
* Return: newNode.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *last = *head;
	int c = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	while (str[c] != '\0')
		c++;

	newNode->str = strdup(str);
	newNode->len = c;
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
