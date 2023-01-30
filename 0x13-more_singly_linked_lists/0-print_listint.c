#include "lists.h"
/**
 * print_listint - prints all elements in a list
 * @h: head of node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		printf("%d\n", temp->n);
		i++;
	}
	return (i);
}

