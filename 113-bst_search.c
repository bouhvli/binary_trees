#include "binary_trees.h"
/**
 * bst_search - this function search for a value in the tree.
 * @tree: a pointer to the tree.
 * @value: the value we are looking for.
 * Return: a pointer to the node node we are looking for or NULL
 * if it doesn't exist.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *tmp_bst = NULL;

	if (!tree)
		return (NULL);
	tmp_bst = (bst_t *)tree;
	while (tmp_bst != NULL)
	{
		if (value <= tmp_bst->n)
		{
			if (tmp_bst->n == value)
			{
				return (tmp_bst);
			}
			else
				tmp_bst = tmp_bst->left;
		}
		else if (value > tmp_bst->n)
		{
			if (tmp_bst->n == value)
			{
				return (tmp_bst->right);
			}
			else
				tmp_bst = tmp_bst->right;
		}
	}
	return (NULL);
}
