#include "lists.h"

/**
 * listint_len - calculates the number of elements in a linked list
 * @h: pointer to head node
 *
 * Return: length of the list
 */

size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;

	while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}
