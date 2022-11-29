#include "lists.h"

/**
 * add_nodeint_end - adds new node to the end of the list
 * @head: pointer to the head node
 * @n: integer
 *
 * Return: pointer to the new node or Null if failed
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
