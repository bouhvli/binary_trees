
#include "binary_trees.h"
/**
 * binary_tree_balance - this function measure the balace factor of the tree.
 * @tree: a pointer to the tree.
 * Return: the balance or 0 if tree is empty.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left += binary_tree_balance(tree->left) + 1;
	if (tree->right != NULL)
	right += binary_tree_balance(tree->right) + 1;

	return (left - right);
}
