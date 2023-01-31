#include "lists.h"
/**
 * print_listint - print all elements of listint_t
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t i = 0;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		printf("%d\n", temp->n);
		i++;
	}
	return (i);
}

