#include "lists.h"
/**
 * dlistint_len - get len of list
 * @h: head of list
 * Return: c
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
