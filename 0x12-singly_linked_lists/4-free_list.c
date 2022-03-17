#include "lists.h"

/**
* free_list - insert node at the end of the list
* @head: pointer to head of list
* Return: void.
*/
void free_list(list_t *head)
{
	free(head->next);
	free(head);
}
