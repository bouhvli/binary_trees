#include "binary_trees.h"
/**
 * binary_tree_inorder - this funtion will go through the tree by using
 * the inorder traversal.
 * @tree: a pointer to the tree.
 * @func: a pointer to a function call.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
