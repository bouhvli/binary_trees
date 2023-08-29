#include "binary_trees.h"
size_t tree_height(const binary_tree_t *tree);
void printLevel(const binary_tree_t *tree, int level, void (*func)(int));
/**
 * binary_tree_levelorder - this function goes through BT using
 * levelorder traversal.
 * @tree: a pointer to the tree.
 * @func: a pointe rto a function call.
*/
void binary_tree_levelorder(const binary_tree_t *tree,
		void (*func)(int))
{
	int levelidx = 1, height = tree_height(tree);

	if (!tree || !func)
		return;

	while (levelidx <= height)
	{
		printLevel(tree, levelidx, func);
		levelidx++;
	}
}
/**
 * tree_height - this function will count the height of tree
 * @tree: a pointer to the tree.
 * Return: the value from height function
*/
size_t tree_height(const binary_tree_t *tree)
{
	size_t height_lift = 0, height_right = 0;

	if (tree == NULL)
		return (0);

	height_lift += tree_height(tree->left) + 1;
	height_right += tree_height(tree->right) + 1;

	return (max(height_lift, height_right));
}
/**
 * printLevel - this function will print nodes on the same
 * level.
 * @tree: a pointer to the tree.
 * @level: the level of the tree to print.
 * @func: a pointer to a function call.
*/
void printLevel(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;
	if (level > 1)
	{
		printLevel(tree->left, level - 1, func);
		printLevel(tree->right, level - 1, func);
	}
	else if (level == 1)
	{
		func(tree->n);
	}
}
