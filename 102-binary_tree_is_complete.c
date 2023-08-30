#include "binary_trees.h"
int count(const binary_tree_t *tree);
int check_by_index(const binary_tree_t *tree, int index, int nodes_n);
/**
 * binary_tree_is_complete - will set the stage for thr check_complete
 * function to check if the given tree is complete or not by using indexes,
 * with tree elements.
 * @tree: a pointer to the tree.
 * Return: 0 if the tree isn't complite or 1 if yes.
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int index = 0;
	int number_of_nodes = 0;

	if (!tree)
		return (0);
	number_of_nodes = count(tree);
	return (check_by_index(tree, index, number_of_nodes));
}
/**
 * count - this function will count the number of nodes in the tree.
 * @tree: a pointer to the tree.
 * Return: the number of nodes or 0 if null.
*/
int count(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (count(tree->left) + count(tree->right) + 1);
}
/**
 * check_by_index - this function will check if the given tree is complete or
 * not.
 * @tree: a pointer to the tree.
 * @index: represent the index of the given node.
 * @nodes_n: the number of nodes in the tree.
 * Return: 0 if tree is complite and 0 if not.
*/
int check_by_index(const binary_tree_t *tree, int index, int nodes_n)
{
	/* his means if this node is NULL, the tree is complete */
	if (!tree)
		return (1);
	/* if the index of the currrent node is > nodes number, */
	/* the tree is not complete */
	if (index >= nodes_n)
		return (0);
	/* 2*idx + 1 represent the left element of the tree, */
	/* 2*idx + 2 represent the right element of the tree */
	/* if the parent node assigned the index 'idx' */
	return (check_by_index(tree->left, 2 * index + 1, nodes_n) &&
		check_by_index(tree->right, 2 * index + 2, nodes_n));
}
