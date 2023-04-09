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

	if (strlen(key) == 0 || strlen(value) == 0)
		return (0);
	if (item == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);/*calculate index*/
	item->key = malloc(sizeof(strlen(key) + 1)); /* set the item*/
	item->value = malloc(sizeof(strlen(value) + 1));
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
		if (strcmp(current_item->key, key) == 0) /*update the value*/
		{
			strcpy(ht->array[index]->value, value);
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
	free_hash_table(ht);
	return (0);
}
