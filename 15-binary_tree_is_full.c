#include "binary_trees.h"

/**
 * binary_tree_is_full-      checks if a binary tree is full
 * @tree:                    pointer to the root node of the tree to check
 * Return:                   1 if binary tree is full, 0 if it is not
 *                           * if tree is NULL, the function will return 0
 *
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL && tree->right != NULL)
		return (0);

	if (tree->left != NULL && tree->right == NULL)
		return (0);

	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);
	if (l && r)
		return (1);

	return (0); /* error */
}
