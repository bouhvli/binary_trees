#include "binary_trees.h"
size_t height(const binary_tree_t *root);
/**
 * binary_tree_height - this function is just a cean representation
 * of the height function.
 * @tree: a pointer to the tree.
 * Return: the value from height function
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t n = height(tree);

	return (n);
}
/**
 * height - this function will measure the height of the given
 * tree.
 * @root: a ponter to the tree.
 * Return: the height or 0 if the tree is empty(NULL).
*/
size_t height(const binary_tree_t *root)
{
	size_t height_lift = 0, height_right = 0;

	if (root == NULL)
		return (0);

	if (root->left != NULL)
		height_lift += binary_tree_height(root->left) + 1;
	if (root->right != NULL)
		height_right += binary_tree_height(root->right) + 1;

	return (max(height_lift, height_right));
}
