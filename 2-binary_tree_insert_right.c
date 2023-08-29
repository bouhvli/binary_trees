#include "binary_trees.h"
/**
 * binary_tree_insert_right - this function will insert values on the right
 * side of the parent node.
 * @parent: pointer to the parent node.
 * @value: the value of the new node to insert.
 * Return: the position of the new node if created or NULL if not.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	if (parent->right == NULL)
	{
		new_node = binary_tree_node(parent, value);
		parent->right = new_node;
	}
	else
	{
		new_node = parent->right;
		if (new_node->parent != NULL)
			new_node->parent = NULL;
		parent->right = NULL;
		parent->right = binary_tree_node(parent, value);
		new_node->parent = parent->right;
		parent->right->right = new_node;
	}
	return (new_node);
}
