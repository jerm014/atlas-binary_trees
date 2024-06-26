#include "binary_trees.h"

/**
 * binary_tree_uncle-        finds the uncle of a node
 * @node:                    pointer to the node to find the uncle
 * Return:                   pointer to the uncle node
 *                           * If node is NULL or if node has no uncle, return
 *                             NULL
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	if (!node->parent->parent)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);

	return (NULL);
}
