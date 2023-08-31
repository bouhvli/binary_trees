#include "binary_trees.h"
bst_t *inorder_successor(bst_t *root);
/**
 * bst_remove - this function will delete a value from the tree.
 * @root: a pointe to the tree.
 * @value: the value to delete.
 * Return: the new tree or null on failure.
*/
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *tmp_node = NULL;

	if (!root)
		return (root);

	if (value > root->n)
		root->right = bst_remove(root->right, value);
	else if (value < root->n)
		root->left = bst_remove(root->left, value);
	else
	{
		if (!root->left)
		{
			tmp_node = root->right;
			free(root);
			return (tmp_node);
		}
		else if (!root->right)
		{
			tmp_node = root->left;
			free(root);
			return (tmp_node);
		}
		else
		{
			tmp_node = inorder_successor(root->right);
			root->n = tmp_node->n;
			root->right = bst_remove(root->right, tmp_node->n);
			return (root);
		}
	}
	return (root);
}
/**
 * inorder_successor - this function will look for the min value in the bst.
 * @root: the poiter to the tree.
 * Return: the min node or null if not found.
*/
bst_t *inorder_successor(bst_t *root)
{
	bst_t *tmp = root;

	while (tmp  && tmp->left != NULL)
	{
		tmp = tmp->left;
	}
	return (tmp);
}
