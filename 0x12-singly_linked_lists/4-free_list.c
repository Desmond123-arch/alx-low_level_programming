#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer to head of node
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
