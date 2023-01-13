#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - add a node to the head of a list
 * @head: pointer to head node
 * @n: integer
 * Return: node
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

	return (new);
}

