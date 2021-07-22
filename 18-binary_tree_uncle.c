#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle of a node
 * @node: binary tree node pointer
 * Return: pointer to uncle if exists, otherwise null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
