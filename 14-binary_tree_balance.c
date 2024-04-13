#include "binary_trees.h"
#include "9-binary_tree_height.c"

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

	l = (int)binary_tree_height(tree->left);
	r = (int)binary_tree_height(tree->right);

	return (l - r);
}
