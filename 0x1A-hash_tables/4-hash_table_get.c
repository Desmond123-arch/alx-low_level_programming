#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: head of the hash table
 * @key: key to find value of
 * Return: value associated with element, on error return NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_item;

	if (ht == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	while (current_item)
	{
		if (strcmp(key, current_item->key) == 0)
			return (current_item->value);
		current_item = current_item->next;
	}
	return (NULL);
}
