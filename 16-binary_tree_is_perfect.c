#include "binary_trees.h"
/**
 * binary_tree_is_perfect - is a perfect
 * @tree: the checked tree
 * Return: Boolean
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree))
		return (1);
	return (0);
}
