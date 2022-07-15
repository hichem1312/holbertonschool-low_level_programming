#include "hash_tables.h"

/**
* hash_table_get - h
* @ht: h
* @key: k
* Return: c
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index;
	hash_node_t **table, *node;

	if (strlen(key) == 0 || !ht)
		return (NULL);

	table = ht->array;
	index = key_index((const unsigned char *)key, ht->size);

	if (!table[index])
		return (NULL);

	node = table[index];
	while (node && strcmp(node->key, key))
		node = node->next;

	if (!node)
		return (NULL);

	return (node->value);
}
