#include "lists.h"
/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer to head node
 *
 * Rreturn: n (head node data or 0 if emptyy string
 */


int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if (head == 0)
	{
		return (0);
	}
	data = (*head)->n;
	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	return (data);
}
