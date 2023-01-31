#include "lists.h"
/**
 * sum_listint - sum of all the data of a linked list
 * @head: pointer to the head node
 * Return: sum of data(n) in node
 * if list is empty return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	size_t i;
	int sum = 0;

	if (head == NULL)
		return (0);
	for (i = 0; temp != NULL; i++, temp = temp->next)
	{
		sum += temp->n;
	}
	return (sum);
}

