#include "binary_trees.h"
/**
 * bst_insert - inserts value in the bst
 * @tree: the double pointer to addr to the root node.
 * @value: the value of the new node.
 * Return: NULL on failure or a pointer to the created node.
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp_bst = NULL;

	if (!*tree)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	tmp_bst = *tree;
	while (tmp_bst != NULL)
	{
		if (value <= tmp_bst->n)
		{
			if (!tmp_bst->left && tmp_bst->n != value)
			{
				tmp_bst->left = binary_tree_node(tmp_bst,
						value);
				return (tmp_bst->left);
			}
			else
				tmp_bst = tmp_bst->left;
		}
		else if (value > tmp_bst->n)
		{
			if (!tmp_bst->right && tmp_bst->n != value)
			{
				tmp_bst->right = binary_tree_node(tmp_bst,
						value);
				return (tmp_bst->right);
			}
			else
				tmp_bst = tmp_bst->right;
		}
	}
	return (NULL);
}
