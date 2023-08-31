#include "binary_trees.h"
/**
 * array_to_bst - convert an array to bst
 * @array: a pointer to the first element of the array.
 * @size: number of element in the array.
 * Return: a pointer to root of the tree or null on failure.
*/
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *new_tree = NULL;

	if (!array)
		return (NULL);
	while (i < size)
	{
		bst_insert(&new_tree, array[i]);
		i++;
	}
	return (new_tree);
}
