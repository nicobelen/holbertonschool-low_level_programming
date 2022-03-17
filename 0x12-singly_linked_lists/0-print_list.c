#include "lists.h"

/**
* print_list - print elements of a list
* @h: head of list
* Return: counter.
*/
size_t print_list(const list_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}
	return (c);
}
