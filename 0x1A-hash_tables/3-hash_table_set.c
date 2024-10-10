#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_hash_node - Creates a new hash node.
 * @key: The key of the new node.
 * @value: The value of the new node.
 *
 * Return: The new hash node, or NULL if it failed.
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new_node;
	char *value_dup, *key_dup;

	value_dup = strdup(value);
	if (value_dup == NULL)
		return (NULL);

	key_dup = strdup(key);
	if (key_dup == NULL)
	{
		free(value_dup);
		return (NULL);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_dup);
		free(key_dup);
		return (NULL);
	}

	new_node->key = key_dup;
	new_node->value = value_dup;
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key.
 *
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			return (current_node->value ? 1 : 0);
		}
		current_node = current_node->next;
	}

	new_node = create_hash_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
