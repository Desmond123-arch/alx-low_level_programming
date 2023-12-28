#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: literal key to be added
 * @value: value to set for key
 * Return: 1, on error returns 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *current_item, *item, *temp;

	if (ht == NULL || strlen(key) == 0 || strlen(value) == 0)
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;
	current_item = ht->array[index];
	if (current_item == NULL)
	{
		ht->array[index] = item;
		return (1);
	}
	else
	{
		if (strcmp(current_item->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			free(item->key);
			free(item->value);
			free(item);
			return (1);
		}
		else
		{
			temp = ht->array[index];
			ht->array[index] = item;
			item->next = temp;
			return (1);
		}
	}
	return (0);
}
