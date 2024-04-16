#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect-   checks if a binary tree is perfect
 * @tree:                    pointer to the root node of the tree to check
 * Return:                   1 if tree is perfect, 0 if it not
 *                           * if tree is NULL, the function will return 0
 *
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;

	if (!tree)
		return (0);

	height = binary_tree_height(tree) + 1; /* height doesn't count root! */
	size = binary_tree_size(tree) + 1; /* 2 ^ actual height - 1 = size */

	/*
	* 1,1 2,3 3,7 4,15 5,31 6,63
	* h1=s1:  2^1 = 2, 2-1 = 1
	* h2=s3:  2^2 = 4, 4-1 = 3
	* h3=s7:  2^3 = 8, 8-1 = 7
	* h4=s15: 2^4 = 16, 16-1 = 15
	* h5=s31: 2^5 = 32, 32-1 = 31
	* h6=s63: 2^6 = 64, 64-1 = 63
	*/

	return ((1 << height) == (int)size);

}
