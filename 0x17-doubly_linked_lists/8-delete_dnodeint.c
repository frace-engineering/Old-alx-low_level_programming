#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - add node at a given idex
 * @head: pointer to head nod
 * @index: given index
 * Return: new_node pointer
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	if ((*head) == NULL)
		return (-1);
	temp = *head;
	count = 0;
	while (temp != NULL && count  < index)
	{
		temp = temp->next;
		count++;
	}
	if ((*head)->next == NULL)
	{
		(*head)->prev = NULL;
		*head = NULL;
		free(temp);
		return (1);
	}
	if (temp->next == NULL)
	{
		temp = temp->prev;
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	if (temp->prev == NULL)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
