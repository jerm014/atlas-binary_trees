#include "binary_trees.h"

/**
 * binary_tree_depth-        measures the depth of a binary tree
 * @tree:                    pointer to the root node of the tree to measure
 *                           the depth of
 * Return:                   depth of tree, or if tree is NULL, 0
 *
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (i);

	while (tree->parent)
	{
		i++;
		tree = tree->parent;
	}
	return (i);
}
