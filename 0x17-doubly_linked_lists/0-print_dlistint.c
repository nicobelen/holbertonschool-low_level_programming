#include "lists.h"

/**
* print_dlistint - print elements of a list
* @h: head of list
* Return: counter.
*/
size_t print_dlistint(const dlistint_t *h)
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
