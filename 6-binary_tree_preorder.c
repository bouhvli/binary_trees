#include "binary_trees.h"
/**
 * binary_tree_preorder - this funtion will go through the tree by using
 * the preorder traversal.
 * @tree: a pointer to the tree.
 * @func: a pointer to a function call.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
