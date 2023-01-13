#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - free a list
 * @head: pointer to head node
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
