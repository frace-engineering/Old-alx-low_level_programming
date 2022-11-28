#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the elements in a linked list
 * @h: pointer to head node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
