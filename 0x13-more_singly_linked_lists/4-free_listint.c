#include "lists.h"

/**
* free_listint - free list
* @head: pointer to head of list
* Return: void.
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
