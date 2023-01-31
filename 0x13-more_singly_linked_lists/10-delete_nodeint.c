#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to head node
 * @index: where node is to be deleted
 * Return: 1(success) -1(error)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *temp = current;
	unsigned int i;

	if (head == NULL)
	{
		return (-1);
	}
	for (i = 0; current != NULL; i++, temp = current, current = current->next)
	{
		if (i == index)
		{
			if (temp == current)
			{
				*head = current->next;
			}
			else
			{
				temp->next = current->next;
			}
			free(current);
			return (1);
		}
	}
	return (-1);
}
