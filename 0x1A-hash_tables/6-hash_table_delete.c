#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: deletes a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *current_item;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		current_item = ht->array[i];
		while (current_item != NULL)
		{
			temp = current_item->next;
			if (current_item->value != NULL)
				free(current_item->value);
			if (current_item->key != NULL)
				free(current_item->key);
			free(current_item);
			current_item = temp;
		}
		ht->array[i] = NULL;
		i++;
	}
	free(ht->array);
	free(ht);
}
