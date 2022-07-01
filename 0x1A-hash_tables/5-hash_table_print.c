#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: strore hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash;
	unsigned long int i, j = 0;
	char *key, *value;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			key = ht->array[i]->key;
			value = ht->array[i]->value;

			if (j == 0)
				printf("'%s': '%s'", key, value);
			else
				printf(", '%s': '%s'", key, value);
			j = 1;
			hash = ht->array[i]->next;

			while (hash)
			{
				key = hash->key;
				value = hash->value;
				printf(", '%s': '%s'", key, value);
				hash = hash->next;
			}
		}
	}
	printf("}\n");
}
