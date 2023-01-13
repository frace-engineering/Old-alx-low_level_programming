#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - return nth node of a list
 * @head: pointer to head nod
 * @index: given index of a list
 * Return: node element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	size_t i;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	for (i = 0; ((i <= index + 1) || (temp->next = NULL)); i++)
		;
	if (i != index)
		return (NULL);
	return (temp);
}
