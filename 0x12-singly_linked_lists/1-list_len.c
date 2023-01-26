#include "lists.h"
/**
 * list_len - find the number of elements in a linked list
 * @h: pointer to the struct list_t
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	const list_t *tmp = h;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
