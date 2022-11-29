#include "lists.h"

/**
 * free_listint - frees the linked list memory
 * @head: pointer to head node
 *
 * Return: NULL
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != 0)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
