#include "binary_trees.h"
/**
 * binary_tree_postorder - this funtion will go through the tree by using
 * the postorder traversal.
 * @tree: a pointer to the tree.
 * @func: a pointer to a function call.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
