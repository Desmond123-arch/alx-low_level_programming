#include "lists.h"
/**
 * get_nodeint_at_index - find the nth node
 * @head: pointer to the head node
 * @index: index of node being searched for
 * Return: pointer to found node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	for (i = 0; temp != NULL; i++, temp = temp->next)
	{
		if (i == index)
		{
			return (temp);
		}
	}
	return (NULL);
}
