#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is root of a binary tree
 * @node: node pointer to be checked
 * Return: 1 if root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent != NULL)
		return (0);
	return (1);
}
