#include "lists.h"

/**
* sum_of_nodes - sum nodes
* @head: pointer to head
* @sum: sum variable
* Return: void
*/
void sum_of_nodes(listint_t *head, int *sum)
{
	if (!head)
		return;

	sum_of_nodes(head->next, sum);

	*sum = *sum + head->n;
}

/**
* sum_listint - returns de sum of al the data (n) of a list
* @head: pointer to head
* Return: sum of data (n)
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	sum_of_nodes(head, &sum);

	return (sum);
}
