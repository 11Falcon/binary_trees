#include "binary_trees.h"
/**
 * binary_tree_balance - balance factor of a binary tree
 * @tree: the tree to be balanced
 * Return: number,?
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int left, right;
	if (tree->left && !tree->left->right && !tree->left->left)
		left = 1;
	else
		left = binary_tree_heigh(tree->left);
	if (tree->right && !tree->right->left && !tree->right->right)
		right = 1;
	else
		right = binary_tree_heigh(tree->right);
	return (left - right);
}
int binary_tree_heigh(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
        if (!tree->right && !tree->left)
                return (0);
        if (binary_tree_heigh(tree->right) < binary_tree_heigh(tree->left))
                return (binary_tree_heigh(tree->left) + 1);
        else
                return (binary_tree_heigh(tree->right) + 1);
}
