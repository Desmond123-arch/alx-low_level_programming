#include "lists.h"
/**
 * dlistint_len - return length of elements on list
 * @h: head node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
