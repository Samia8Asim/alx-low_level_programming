#include "hash_tables.h"

/**
 * hash_table_get - get the value of input key
 * @ht: the hash table
 * @key: input key
 * Return: value of key ,and NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *curr;
	unsigned long int idx;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[idx];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			return (curr->value);
		}
		curr = curr->next;
	}
	return (NULL);
}
