#include "hash_tables.h"

/**
 * hash_table_print - print key/values of hash table in order
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node;
	char *comma = "";

	if (!ht || !ht->array)
		return;

	printf("{");
	while (index < ht->size)
	{
		node = ((ht->array)[index]);
		while (node)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		index++;
	}
	printf("}\n");
}
