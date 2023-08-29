#include "binary_trees.h"
binary_tree_t *tree_sibling(binary_tree_t *node);
/**
 * binary_tree_uncle - this function will look for the uncle of
 * a given node.
 * @node: a pointer to the node.
 * Return: a pointer to uncle node or nule if it doesn't exist.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || (!node->parent || !node->parent->parent))
		return (NULL);

	return (tree_sibling(node->parent));
}
/**
 * tree_sibling - this function will look for the sibling of
 * a given node.
 * @node: a pointer to the node.
 * Return: a pointer to sibling node or nule if it doesn't exist.
*/
binary_tree_t *tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling_node = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		sibling_node = node->parent->right;
	if (node->parent->right == node)
		sibling_node = node->parent->left;

	return (sibling_node);
}
