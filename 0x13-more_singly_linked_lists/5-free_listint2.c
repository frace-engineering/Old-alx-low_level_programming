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

	temp = *head;
	while (temp->next != 0)
	{
		temp->next = *head;
		*head = temp->next->next;
		free(temp);
		temp = *head;
	}
	temp->next = NULL;
}
