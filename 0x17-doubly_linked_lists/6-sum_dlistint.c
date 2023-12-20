#include "lists.h"
/**
 * sum_dlistint - sum of all the data of a dlistint_t linked list
 * @head: pointer to the  head node
 * Return: 0 if the list is empty, or else sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
