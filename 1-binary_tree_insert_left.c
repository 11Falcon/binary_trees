#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left_child
 * @parent: parent node
 * @value: node value
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftChild = malloc(sizeof(binary_tree_t));
	
	if (!leftChild)
		return (NULL);
	parent->left = leftChild;
	leftChild->n = value;
	leftChild->parent = parent;
	return (leftChild);
}
