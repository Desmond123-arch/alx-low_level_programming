#include "hash_tables.h"
/**
 * hash_table_get - get a value associated with a key
 * @ht: pointer to hash table
 * @key: key to be searched for
 * Return: value associated with the element,
 * on error return NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	const hash_node_t *item;

	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];
	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	while (item)
	{
		if (strcmp(item->key, key) == 0)
		{
			return (item->value);
		}
		item = item->next;
	}
	return (NULL);
}
