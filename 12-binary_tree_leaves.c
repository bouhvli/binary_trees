#include "binary_trees.h"
/**
 * binary_tree_leaves - this function will count the number of the
 * leaves in the tree.
 * @tree: a pointer to the tree.
 * Return: the number of the leaves or 0 if the tree is empty.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		count += 1;
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);

	return (count);
}
