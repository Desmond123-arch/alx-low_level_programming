#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer that points to the head node pointer
 * @idx: place to put n
 * @n: number to be inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *temp;
	unsigned int i;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	for(i = 0; current != NULL; i++, temp = current, current = current->next)
	{
		if (i == idx)
		{
			new->next = current;
			temp->next = new;
			return (new);
		}
	
	}
	return (NULL);
}
