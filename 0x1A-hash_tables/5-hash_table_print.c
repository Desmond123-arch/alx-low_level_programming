#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to head of hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	const hash_node_t *item;
	unsigned long int i = 0;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			item = ht->array[i];
			while (item)
			{
				if (flag)
				{
					printf(", ");
					flag = 0;
				}
				printf("\'%s\': \'%s\'", item->key, item->value);
				 flag = 1;
				 item = item->next;
			}
		}
		i++;
	}
		printf("}\n");
}
