#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table to be created
 * Returns: pointer to the newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	int i = 0;
	hash_table_t *table;


	if (size <= 0)
		return NULL;

	table = malloc (sizeof(hash_table_t));
	if (table == NULL)
		return NULL;

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));

	if (table == NULL)
	{
		return (NULL);
	}
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	while (size)
	{
		/*set each slot of array to zero*/
		table->array[i] = NULL;
		i++;
		size--;
	}
	return (table);
}
