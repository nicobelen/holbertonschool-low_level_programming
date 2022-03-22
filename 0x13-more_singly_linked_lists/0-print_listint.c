#include "lists.h"

/**
* print_listint - print elements of a list
* @h: head of list
* Return: counter.
*/
size_t print_listint(const listint_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		c++;
	}
	return (c);
}
