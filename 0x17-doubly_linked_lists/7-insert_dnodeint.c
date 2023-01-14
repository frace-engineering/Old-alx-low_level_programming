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

	count = 0;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{
		return (NULL);
	}
	temp = *h;
	while (count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next = new_node;
	if (temp->next == NULL)
	{
		new_node->prev = temp;
		temp->next = new_node;
		new_node->next = NULL;
	}
	if (temp->prev == NULL)
	{
		new_node->next = temp;
		*h = new_node;
		new_node->prev = NULL;
	}

	return (new_node);
}
