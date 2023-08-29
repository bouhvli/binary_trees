#include "binary_trees.h"
/**
 * binary_tree_uncle - this function will look for the uncle of
 * a given node.
 * @node: a pointer to the node.
 * Return: a pointer to uncle node or nule if it doesn't exist.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle_node = NULL, *tmp_node = NULL;

	if (!node || (!node->parent || !node->parent->parent))
		return (NULL);
	tmp_node = node->parent;
	if (tmp_node->parent != NULL)
	{
		if (tmp_node->right == node)
			uncle_node = tmp_node->parent->right;
		if (tmp_node->left == node)
			uncle_node = tmp_node->parent->left;
	}
	return (uncle_node);
}
