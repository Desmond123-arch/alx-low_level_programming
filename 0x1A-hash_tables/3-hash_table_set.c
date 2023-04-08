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

	if (strlen(key) == 0 || strlen(value) == 0)
		return 0;

	/* calculate index */
	
	index = key_index((const unsigned char *)key, ht->size);

	/* set item */
	item->key = malloc(sizeof(strlen(key) + 1));
	item->value = malloc(sizeof(strlen(value) + 1));
	item->key = strcpy(item->key, key);
	item->value = strcpy(item->value, value);
	item->next = NULL;
	current_item = ht->array[index];

	/*index is free*/
	if (current_item == NULL)
	{
		/*insert into table */
		ht->array[index] = item;
	}
	else
	{
		/*Upadate the value */
		if (strcmp(current_item->key, key) == 0)
		{
			strcpy(ht->array[index]->value, key);
			return (1);
		}
		else
		{
			/*handle collisions*/
			handle_collision(ht,index, item);
			return (1);
		}
	
	}
	return (0);
}

/**
 * handle_collision: takes car of collisions of nodes 
 * @table: hash table
 * @index: index of node with collision
 * @item: item to be added
 *  
 */

void handle_collision(__attribute__((unused))hash_table_t *table, __attribute__((unused))unsigned long int index, __attribute__((unused))hash_node_t *item)
{
    /*list */
    return;
}
