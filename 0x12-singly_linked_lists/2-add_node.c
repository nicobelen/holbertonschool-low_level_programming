#include "lists.h"

/**
* list_len - print elements of a list
* @h: head of list
* Return: counter.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int c = 0;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	while (str[c])
		c++;

	newNode->str = strdup(str);
	newNode->len = c;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
