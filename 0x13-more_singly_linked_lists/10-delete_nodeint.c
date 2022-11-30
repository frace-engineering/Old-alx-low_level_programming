#include "lists.h"

/**
 * delet_nodeint_at_index - deletes the node at the given index
 * @head: pointer to head node
 * @index: given index
 *
 * Return: 1 if successful or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *new;
	unsigned int i;

	i = 0;

	ptr = *head;
	
	if (ptr->next == 0)
		return (0);

	while (ptr && i < (index - 1))
	{
		ptr = ptr->next;
		i++;
	}
	new = ptr->next;
	ptr->next = new->next;
	free(new);
	if (new == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
	return (0);

}
