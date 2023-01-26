#include "lists.h"
#include "string.h"
/**
 * add_node - adds a new node to a list
 * @head: begining of node
 * @str: new string to be inserted
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->next = NULL;
	if(head != NULL)
	{
		temp->next = *head;
		temp->len = strlen(str);
	}
	*head = temp;
	return (temp);
}
