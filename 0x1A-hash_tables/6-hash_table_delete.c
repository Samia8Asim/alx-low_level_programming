#include "hash_tables.h"

/**
 * hash_table_delete - func to delete ht
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *next;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			next = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = next;
		}
	}
	free(ht->array);
	free(ht);
}
