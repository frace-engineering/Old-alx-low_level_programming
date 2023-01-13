#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - calculates the length of a list
 * @h: head pointer
 * Return: lengthof the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
