
#include "binary_trees.h"
size_t tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - this function measure the balace factor of the tree.
 * @tree: a pointer to the tree.
 * Return: the balance or 0 if tree is empty.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = tree_height(tree->left);
	if (tree->right != NULL)
		right = tree_height(tree->right);

	return (left - right);
}
/**
 * tree_height - this function will count the height of tree
 * @tree: a pointer to the tree.
 * Return: the value from height function
*/
size_t tree_height(const binary_tree_t *tree)
{
	size_t height_lift = 0, height_right = 0;

	if (tree == NULL)
		return (0);

	height_lift += tree_height(tree->left) + 1;
	height_right += tree_height(tree->right) + 1;

	return (max(height_lift, height_right));
}
