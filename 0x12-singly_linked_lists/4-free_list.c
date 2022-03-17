#include "lists.h"

/**
* free_list - insert node at the end of the list
* @head: pointer to head of list
* Return: void.
*/
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
