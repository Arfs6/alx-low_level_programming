#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - add a key value pair to the hash table
 * @ht: hash table
 * @key: key string
 * @value: value string
 *
 * Return: 1: added successfully
 * 0: not successful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *newNode;

	if (key == NULL || value == NULL)
		return (0);
	else if (*key == '\0')
		return (0);

	idx = key_index(key, ht->size);

	/* create the node and add it's key and value */
	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key), free(newNode);
		return (0);
	}
	newNode->next = NULL;

	/* add the node to the begining of the list at it's index */
	if (ht->array[idx] == NULL)
		/* first item */
		ht->array[idx] = newNode;
	else
	{
		newNode->next = ht->array[idx];
		ht->array[idx] = newNode;
	}
	return (1);
}
