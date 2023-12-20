#include "lists.h"
/**
 * get_dnodeint_at_index - get nth node from list
 * @head: pointer to the head node
 * @index: nth node to get
 * Return: nth node or on error return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head != NULL; i++, head = head->next)
	{
		if (i == index)
		{
			return (head);
		}
	}
	return (NULL);
}
