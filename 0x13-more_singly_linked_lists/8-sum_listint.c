#include "lists.h"

/**
 * sum_listint - returns the sum of the data of a list
 * @head: pointer to head node
 *
 * Return: sum of all the data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;
	int data;

	ptr = head;
	sum = 0;
	data = 0;

	if (head == 0)
	{
		return (0);
	}

	while (ptr != 0)
	{
		data = ptr->n;
		sum += data;

		ptr = ptr->next;
	}
	return (sum);
}
