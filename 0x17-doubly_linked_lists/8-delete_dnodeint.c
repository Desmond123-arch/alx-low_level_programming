#incude "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at an index
 * @head: double pointer to first node in linked list
 * @index: index to position to delete
 * Return: 1 Success, -1 Fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		temp->temp2 = NULL;
		return (1);
	}
	temp = *head;
	for (i = 0; temp !=  NULL; temp = temp->next, i++)
	{
		if (i == idx)
		{
			temp2 = temp->next;
			temp2->prev = temp->prev->prev;
			temp = temp2->prev;
			temp->next = temp2->next->next;
			return (1);
		}
	}
	if (temp == NULL)
		return (-1);
	return (-1);
}

