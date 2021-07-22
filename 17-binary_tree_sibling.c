#include "binary_trees.h"

/**
 * binary_tree_sibling - traverse binary tree pre-orderly
 * @node: pointer to the binary tree node its sibiling to be returned
 * Return: node sibiling if exist, otherwise null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL ||
		node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
