#include "lists.h"

/**
* listint_len - return number of elements on a list
* @h: pointer to head
* Return: counter
*/
size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
