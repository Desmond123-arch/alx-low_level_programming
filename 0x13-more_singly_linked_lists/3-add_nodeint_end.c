#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: pointer to a pointer to the head node
 * @n: number to be added
 * Return: address of the new element
 * on error return NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
