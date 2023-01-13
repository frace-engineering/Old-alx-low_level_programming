#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_dlistint - sum the data in the list nodes
 * @head: pointer to head node
 *
 * Return: return the sum
 */
int sum_dlistint(dlistint_t *head)
{
	size_t count;
	dlistint_t *ptr;

	count = 0;
	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (0);
	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		count += ptr->n;
		ptr = ptr->next;
	}
	return (count);
}
