#include "binary_trees.h"

/**
 * binary_tree_inorder-      goes through a binary tree using in-order
 *                           traversal; if tree or func is NULL, do nothing
 * @tree:                    pointer to the root node of the tree to traverse
 * @func:                    pointer to a function to call for each node
 *                           * the value in the node must be passed as a
 *                             parameter to this function
 * Return:                   nothing
 *
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		if (tree->left)
			binary_tree_inorder(tree->left, func);
		if (func)
			func(tree->n);
		if (tree->right)
			binary_tree_inorder(tree->right, func);

	}
}
