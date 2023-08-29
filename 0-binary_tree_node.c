#include "binary_trees.h"
/**
 * binary_tree_node - this function create a tree node.
 * @parent: a pointer to the parent of the node.
 * @value: the value of the new node to add.
 * Return: the new node created or NULL if not.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right =  NULL;
	new_node->parent = parent;
	parent = new_node;
	return (new_node);
}

