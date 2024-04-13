#include "binary_trees.h"

/**
 * binary_tree_insert_left-  inserts a node as the left-child of another node
 * @parent:                  the node to insert the left-hand child in
 * @value:                   the value of the new node
 * Return:                   pointer to the new node, NULL on fail or if parent
 *                           is NULL
 *
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	if (parent->left)
		new->left = parent->left;
	else
		new->left = NULL;
	
	parent->left = new;
	new->right = NULL;
	new->n = value;
	new->parent = parent;

	return (new);

}
