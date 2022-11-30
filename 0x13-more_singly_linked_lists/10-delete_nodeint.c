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
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index - 1)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		del = temp;
		del = del->next;
		temp->next = del->next;
		free(del);
		printf("%d : I am here\n", del->n);
	}
	return (1);
}
