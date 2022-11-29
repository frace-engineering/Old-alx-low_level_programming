#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given index
 * @head: pointer to head node
 * @idx: the index to insert the node
 * @n: the n member of the node
 *
 * Return: pointer to new node on success else. NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *new;
	unsigned int i;

	ptr = *head;
	i = 0;
	new = (listint_t *)malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (; ptr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
		else
		{
			ptr = ptr->next;
		}
	}

	return (NULL);
}
