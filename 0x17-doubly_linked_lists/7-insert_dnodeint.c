#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - add node at a given idex
 * @h: pointer to head nod
 * @n: integer
 * @idx: given index
 * Return: new_node pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{
		return (0);
	}
	temp = *h;
	count =0;
	while (temp != NULL && count < idx)
	{
		temp = temp->next;
		count++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	temp = new_node;
	return (new_node);
}
