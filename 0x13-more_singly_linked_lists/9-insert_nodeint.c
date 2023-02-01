#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer that points to the head node pointer
 * @idx: place to put n
 * @n: number to be inserted
 * Return: pointer to address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	unsigned int i;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (idx == 0 || *head == NULL)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	for (i = 0; current != NULL; i++, current = current->next)
	{
		if (i == idx - 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}

	}
	free(new);
	return (NULL);
}
