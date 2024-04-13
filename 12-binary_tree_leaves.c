#include "binary_trees.h"

/**
 * binary_tree_leaves-       counts the leaves in a binary tree
 *                           * a NULL pointer is not a leaf
 * @tree:                    pointer to the root node of the tree to count the
 *                           number of leaves of
 * Return:                   the number of leaves
 *                           * if tree is NULL, the function will return 0
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if (tree->left)
		l = binary_tree_leaves(tree->left);

	if (tree->right)
		r = binary_tree_leaves(tree->right);

	return (l + r);
}
