#include "binary_trees.h"

/**
 * binary_tree_insert_right- inserts a node as the right-child of another node
 * @parent:                  the node to insert the left-hand child in
 * @value:                   the value of the new node
 * Return:                   pointer to the new node, NULL on fail or if parent
 *                           is NULL
 *
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);

}
