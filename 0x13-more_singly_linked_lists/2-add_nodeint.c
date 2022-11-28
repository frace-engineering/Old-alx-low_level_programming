#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of the list
 * @head: pointer to head node
 * @n: integer
 *
 * Return: pointer to newnode else NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}

