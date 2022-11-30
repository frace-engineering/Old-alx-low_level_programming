#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the given index
 * @head: pointer to head node
 * @index: given index
 *
 * Return: 1 if successful or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *del;
	unsigned int i;

	i = 0;

	temp = *head;
	while (!*head)
		return (0);
	while (temp->next != 0)
	{
		for (; i < index - 1; i++)
		{
			temp = temp->next;
		}
		del = temp->next;
		del->next = temp->next;
		free(del);
		printf("%d : I am here\n", del->n);
	}

	if (del == 0)
	{
		exit(1);
	}
	else
	{
		exit(-1);
	}
	return (0);
}
