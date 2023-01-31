#include "lists.h"
/**
 * free_listint2 - free a listint_t
 * @head: pointer to a pointer to the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	if (head == NULL)
	{
		return;
	 }
	while (*head != NULL)
	{
		current = (*head)->next;
		ree(*head);
		*head = current;
	}
}
