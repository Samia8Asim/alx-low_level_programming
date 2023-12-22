#include "hash_tables.h"

/**
 * hash_table_set -  func adds an element to a hash table
 * @ht: the hash table
 * @key: key of new element
 * @value: value of new element
 * Return: 1(succeeded), 0 (otherwise)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *cur, *new;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	cur = ht->array[idx];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			free(cur->value);
			cur->value = strdup(value);
			if (!cur->value)
				return (0);
			return (1);
		}
		cur = cur->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (!(new->key) || !(new->value))
		return (0);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
