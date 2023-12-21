#include "hash_tables.h"

/**
 * key_index -  gives you the index of a key
 * @key: input key
 * @size: size of array
 * Return: index where key/value pair stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hsh;

	hsh = hash_djb2(key);
	return (hsh % size);
}
