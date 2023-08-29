#include "binary_trees.h"
/**
 * binary_tree_depth - this function will measure the depth
 * of the given tree.
 * @tree: a pointer to the tree.
 * Return: the depth or 0 if the tree is empty(NULL).
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		parent += binary_tree_depth(tree->parent) + 1;

	return (parent);
}

