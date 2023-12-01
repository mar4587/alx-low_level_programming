#include "hash_tables.h"

/**
 * hash_table_get - This retrieves a value associated with a key.
 * @ht: a pointer to the hash table array.
 * @key: the key, a string not be empty
 *
 * Return: the value associated with the key
 * or NULL if key can't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_nd_t *node;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	nd = ht->array[index];
	while (nd != NULL)
	{
		if (strcmp(nd->key, key) == 0)
			return (nd->value);
		nd = node->next;
	}
	return (NULL);
}
