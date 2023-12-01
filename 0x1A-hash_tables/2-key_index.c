#include "hash_tables.h"

/**
 * key_index - This gets the index at which a key/value
 * pair should be stored in array of a hash table
 * @key: the key
 * @size: size of the hash table
 *
 * Return: index of the key
 *
 * Description: uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
