#include "lists.h"

/**
* main - check the code
*
* Return: Always 0.
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
