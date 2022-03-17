#include "lists.h"

/**
* add_node -  dd node at beginning of the list
* @head: pointer to head of list
* @str: string recieved
* Return: newNode.
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
