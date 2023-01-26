#include "lists.h"
/**
 * print_list - prints a list of nodes
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	size_t i = 0;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		if ((tmp->str) == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
	}
	return (i);
}
