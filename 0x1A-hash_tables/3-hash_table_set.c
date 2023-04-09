#include "hash_tables.h"
/**
 * hash_table_set - add an element to the hash table
 * @ht: table to add or update
 * @key: key to be used (cannot be empty)
 * @value: value to be associated with key (cannot be empty)
 * Return: 1 on success, 0 on error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_item;
	hash_node_t *item = malloc(sizeof(hash_node_t)); /*create an item*/
	hash_node_t *temp;

	if (strlen(key) == 0 || strlen(value) == 0 || ht == NULL)
		return (0);
	if (item == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);/*calculate index*/
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
		if (current_item != NULL)
		{
			free(ht->array[index]->value); /* Free existing value */
			ht->array[index]->value = strdup((char *)value);
			free(item->key); /* Free item->key */
			free(item->value); /* Free item->value */
			free(item); /* Free item */
			return (1);
		}
		else/*collisions*/
		{
			temp = ht->array[index];
			ht->array[index] = item;
			item->next = temp;
			return (1);
		}

	}
	return (0);
}
