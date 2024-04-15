#include "binary_trees.h"
#include "12-binary_tree_leaves.c"

/**
 * binary_tree_balance-      measures the balance factor of a binary tree
 * @tree:                    pointer to the root node of the tree to measure
                             the balance factor
 * Return:                   balance factor of tree
 *                           * if tree is NULL, the function will return 0
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l = (int)binary_tree_leaves(tree->left);
	if (tree->right)
		r = (int)binary_tree_leaves(tree->right);

	return (l - r);
}
