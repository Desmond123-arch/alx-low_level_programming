#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    hash_node_t *temp;
    int index1 = key_index((const unsigned char *)"mentioner", 1024);
    

    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "cool");
    hash_table_set(ht, "mentioner", "awesome");
    temp = ht->array[index1];    
    while (temp)
    {
        printf("%s: %s\n", temp->key, temp->value);
        temp = temp->next;
    }
    
    return (EXIT_SUCCESS);
}
