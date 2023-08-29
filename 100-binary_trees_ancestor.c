#include "binary_trees.h"
size_t tree_height(const binary_tree_t *tree);
/**
 * binary_trees_ancestor - finds LCA of 2 nodes.
 * @first: pointer to the first node.
 * @second: pointer to the second node.
 * Return: pointer to the LCA or null if not found.
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	if (tree_height(first) > tree_height(second))
		return (binary_trees_ancestor(first, second->parent));
	else
		return (binary_trees_ancestor(first->parent, second));
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
