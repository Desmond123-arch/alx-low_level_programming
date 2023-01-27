#include "lists.h"
/**
 * add_node_end - add node to end of list
 * @head: pointer to node first
 * @str: character to be inserted
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = (list_t *) malloc(sizeof(list_t));
	list_t *last;

	if (temp == NULL || str == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->next = NULL;
	temp->len = strlen(str);
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = temp;
	return (temp);
}

