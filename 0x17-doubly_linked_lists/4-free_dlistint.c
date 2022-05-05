#include "lists.h"

/**
* free_dlistint - free list
* @head: pointer to head of list
* Return: void.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
