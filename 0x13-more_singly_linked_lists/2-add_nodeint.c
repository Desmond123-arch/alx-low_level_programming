#include "lists.h"
/**
 * add_nodeint - beginning of a listint_t
 * @head: pointer to a pointer to the head node
 * @n:value to be added
 * Return: address of the new element
 * on error return NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
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
		return (*head);
	}
	new->next = *head;
	*head = new;
	return (*head);
}
