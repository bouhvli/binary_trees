#include "binary_trees.h"
/**
 * binary_tree_is_leaf - this function checks if a given node is
 * a leaf.
 * @node: pointer to the node to check.
 * Return: 0 if the node is not a leaf and 1 if yes.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}
