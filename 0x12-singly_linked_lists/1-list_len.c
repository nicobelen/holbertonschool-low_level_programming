#include "lists.h"

/**
* list_len - print elements of a list
* @h: head of list
* Return: counter.
*/
size_t list_len(const list_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
		}
		return (c);
}
