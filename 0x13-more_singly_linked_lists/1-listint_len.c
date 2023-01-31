#include "lists.h"
/**
 * listint_len - number of elements in a linked list
 * @h: pointer to the header file
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp = h;

	while (!(temp == NULL))
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
