#include "binary_trees.h"
/**
 * binary_tree_delete - as the name says this function
 * will delete the binary tree and free the memory.
 * @tree: pointer to the tree.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
