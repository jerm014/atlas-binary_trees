#include "binary_trees.h"
#include "13-binary_tree_nodes.c"
#include "binary_tree_print.c"
#include "0-binary_tree_node.c"
#include "1-binary_tree_insert_left.c"
#include "2-binary_tree_insert_right.c"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	size_t nodes;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_print(root);

	nodes = binary_tree_nodes(root);
	printf("Nodes in %d: %lu\n", root->n, nodes);
	nodes = binary_tree_nodes(root->right);
	printf("Nodes in %d: %lu\n", root->right->n, nodes);
	nodes = binary_tree_nodes(root->left->right);
	printf("Nodes in %d: %lu\n", root->left->right->n, nodes);
	return (0);
}
