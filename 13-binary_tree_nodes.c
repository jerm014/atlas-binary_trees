#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "12-binary_tree_leaves.c"

/**
 * binary_tree_nodes-        counts the nodes with at least 1 child in a binary
 *                           tree
 *                           * a NULL pointer is not a node
 * @tree:                    pointer to the root node of the tree to count the
 *                           number of nodes of
 * Return:                   the number of nodes
 *                           * if tree is NULL, the function will return 0
 *
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
		return (0);
	
	if ((!(tree->left)) && (!(tree->right)))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
