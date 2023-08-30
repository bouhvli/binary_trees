#include "binary_trees.h"
int bst(const binary_tree_t *tree, const binary_tree_t *old_node);
/**
 * binary_tree_is_bst - check if BT is BST
 * @tree: a pointer to the search tree.
 * Return: 0 if tree is empty or not BST and 1 if it is BST.
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	binary_tree_t *old_node = NULL;

	if (!tree)
		return (0);
	return (bst(tree, old_node));
}
/**
 * bst - this function will check if the binary tree is BST by
 * traversing the in inorder traverse, and tracking the old node, and
 * if the value of the old node is greater than the current node then
 * the tree is not BST
 * @tree: a pointer to the tree.
 * @old_node: a pinter to preserve the old node.
 * Return: 0 if the tree is not BST or 1 it yes.
*/
int bst(const binary_tree_t *tree, const binary_tree_t *old_node)
{
	if (!tree)
		return (1);
	if (!bst(tree->left, old_node))
		return (0);
	/*this condition allow unique nodes only*/
	if (old_node != NULL && (tree->n < old_node->n))
		return (0);
	old_node = tree;
	return (bst(tree->right, old_node));
}
