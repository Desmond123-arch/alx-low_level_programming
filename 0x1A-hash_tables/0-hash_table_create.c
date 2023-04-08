#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table to be created
 * Returns: pointer to the newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));
	int i = 0;

	if (table == NULL)
	{
		return (NULL);
	}
	if (table->array == NULL)
	{
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
