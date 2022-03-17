#include "lists.h"

/**
* list_len - print elements of a list
* @h: head of list
* Return: counter.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int c;

	for (c = 0;  

	if (newNode == NULL)
		return (NULL);
	else
	{
		newNode->str = str;
		newNode->next = head;

		head = newNode;
	}
	return (newNode);
}
