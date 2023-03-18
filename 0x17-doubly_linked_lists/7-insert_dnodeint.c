#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to head node
 * @idx: index of node
 * @n: number to insert
 * Return: address of new node, on error return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;

	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if (*h == NULL)
	{
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		return(add_dnodeint(h,n));
	}
	for (i = 0; temp != NULL; temp = temp->next, i++)
	{
		if (i == (idx - 1))
		{
			new->next = temp->next;
			temp->next = new;
			new->prev = temp;
			if (new->next != NULL)
			{
				new->next->prev = new;
			}
			return (new);
		}
	}
	if (temp == NULL && i == idx)
	{
		return  (add_dnodeint_end(h, n));
	}
	return (NULL);
}
