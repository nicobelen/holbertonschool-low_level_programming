#include "lists.h"

/**
* free_list - insert node at the end of the list
* @head: pointer to head of list
* Return: void.
*/
void free_list(list_t *head)
{
	list_t *tmp, *tmp2;

	tmp = head;

	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = tmp2;
	}
}
