#include "lists.h"
/**
 * free_listint2 - free a listint_t
 * @head: pointer to a pointer to the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *current;
	if (*head == NULL)
	{
		return;
	}
	while (temp != NULL)
	{
		current = temp;
		temp = temp->next;
		free(current);
	}
	*head = NULL;
}
