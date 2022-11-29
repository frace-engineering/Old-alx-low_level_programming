#include "lists.h"

/**
 * free_listint2 - frees the linked list and assign head to NULL
 * @head: pointer to head node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *see;

	if (head == 0)
	{
		return;
	}

	temp = *head;
	while (temp)
	{
		see = temp->next;
		free(temp);
		temp = see;
	}
	temp = NULL;
}
