#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: input hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i;
	int fp = 1;

	if (!(ht))
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			if (!(fp))
				printf(", ");
			printf("'%s': '%s'", curr->key, curr->value);
			curr = curr->next;
			fp = 0;
		}
	}
	printf("}\n");
}
