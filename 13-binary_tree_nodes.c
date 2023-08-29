
#include "binary_trees.h"
/**
 * binary_tree_nodes - this will count the number of nodes in the tree.
 * @tree: a pointer to the tree.
 * Return: the number of nodes or 0 if empty.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count += 1;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}

