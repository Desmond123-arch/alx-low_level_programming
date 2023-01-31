#include "lists.h"
/**
 * pop_listint - delets a head node and returns the head node's data
 * @head: pointer to a pointer to the head node
 * Return: the head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = (*head)->next;
	int n = (*head)->n;

	if (head == NULL)
	{
		return (0);
	}
	free(*head);
	*head = temp;
	return (n);
}
