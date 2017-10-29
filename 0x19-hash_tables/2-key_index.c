#include "hash_tables.h"

/**
 * key_index - gets the index of a key.
 * @key: input key.
 * @size: size of the hash table.
 * Return: index of key in the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *)key) % size);
}
