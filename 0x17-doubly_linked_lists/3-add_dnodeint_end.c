#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - add not to end of list
 * @head: pointer to head nod
 * @n: integer
 * Return: new_node pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last;
	dlistint_t *temp;

	last = malloc(sizeof(dlistint_t));
	if (last == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;
	if (*head == NULL)
	{
		last->next = NULL;
		*head = last;
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = last;
	last->prev = temp;

	return (last);
}
