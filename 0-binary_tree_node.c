#include "binary_trees.h"

/**
 * binary_tree_node-         creates a binary tree node
 * @parent:                  the parent node to the new node
 * @value:                   value of the new node
 * Return:                   pointer to the new node, NULL on failure
 *
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	return (new);
}
