#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: pointer to the newly created hash table,
 * on error: return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(size));
	unsigned long int i;

	if (table == NULL)
	{
		return NULL;
	}
	if (size <= 0)
	{
		return NULL;
	}
	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return NULL;
	}
	for (i = 0; i < size; i++)
	{
		(table->array)[i] = NULL;
	}
	return table;
}
