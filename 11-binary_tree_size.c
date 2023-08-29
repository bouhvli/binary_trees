#include "binary_trees.h"
/**
 * binary_tree_size - this function will measure the size ot the tree
 * given.
 * @tree: a pointer to the tree.
 * Return: 0 if the tree is empty or the size of it if not.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = binary_tree_size(tree->left);
	if (tree->right != NULL)
		right = binary_tree_size(tree->right);

	return ((sum(left, right)) + 1);
}
