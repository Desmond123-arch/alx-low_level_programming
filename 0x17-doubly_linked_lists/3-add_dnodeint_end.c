#include "lists.h"
/**
 * add_dnodeint_end - add node to end of list
 * @head: pointer to the head node
 * @n: number to insert
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	return (new);
}
