#include "binary_trees.h"
/**
 * binary_tree_is_root - this function checks if the given node
 * is the root node or not.
 * @node: pointer to the node we want to check.
 * Return: 0 if nodeis not the root node and 1 if yes.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (node->parent == NULL ? 1 : 0);
}
