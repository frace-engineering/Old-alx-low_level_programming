#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - add node at a given idex
 * @h: pointer to head nod
 * @n: integer
 * @index: given index
 * Return: new_node pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	size_t i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*h == NULL)
	{
		return (NULL);	
	}
	temp = *h;

	for (i = 0; (temp->next != NULL || i < idx); i++)
		;
	if (i != idx)
	{
		printf("I am here");
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp = new_node;
	return (new_node);
}
