#include "binary_trees.h"

/**
 * binary_tree_height-       measures the height of a binary tree
 * @tree:                    pointer to the root node of the tree to measure
 *                           the height of
 * Return:                   height of tree, or if tree is NULL, 0
 *
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree->left)
		height_l = 1 + binary_tree_height(tree->left);
	
	if (tree->right)
		height_r = 1 + binary_tree_height(tree->right);

	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}
