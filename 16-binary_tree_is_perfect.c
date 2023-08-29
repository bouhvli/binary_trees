#include "binary_trees.h"
int tree_height(const binary_tree_t *tree);
int height(const binary_tree_t *root);
/**
 * binary_tree_is_perfect - this function checks f the tree is
 * perfect.
 * @tree: a pointer to the tree.
 * Return: the 1 if the tree is perfect and 0 if not.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;

	if (!tree)
		return (0);

	height = tree_height(tree);

	if (height == 0)
		return (1);

	if (tree_height(tree->left) != tree_height(tree->right))
		return (0);

	if (!tree->right && tree->left)
		return (0);
	if (tree->right && !tree->left)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
/**
 * tree_height - this function is just a cean representation
 * of the height function, since the compilation doesn't include
 * all files this function from task 9 is added to this file.
 * @tree: a pointer to the tree.
 * Return: the value from height function
*/
int tree_height(const binary_tree_t *tree)
{
	int n = height(tree);

	return (n);
}
/**
 * height - this function will measure the height of the given
 * tree.
 * @root: a ponter to the tree.
 * Return: the height or 0 if the tree is empty(NULL).
*/
int height(const binary_tree_t *root)
{
	int height_lift = 0, height_right = 0;

	if (root == NULL)
		return (0);

	if (root->left != NULL)
		height_lift += tree_height(root->left) + 1;
	if (root->right != NULL)
		height_right += tree_height(root->right) + 1;

	return (max(height_lift, height_right));
}
