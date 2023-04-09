#include "hash_tables.h"
/**
* hash_table_delete - function
* @ht: hash table to delete
*
* Description: Function to delete a hash table.
* Return: 0 (Success)
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item, *temp;
	unsigned long int index = 0;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		item = ht->array[index];
		while (item != NULL)
		{
			temp = item->next;
			if (item->key != NULL)
				free(item->key);
			if (item->value != NULL)
				free(item->value);
			free(item);
			item = temp;
		}
		ht->array[index] = NULL;
		index++;
	}
	free(ht->array);
	free(ht);
}
