#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to head node
 * @index: index of the returned node
 *
 * Return: not at index or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	i = 0;

	ptr = head;

	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr)
	{
		return (ptr);
	}
	return (NULL);
}
