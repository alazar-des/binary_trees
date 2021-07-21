#include "binary_trees.h"

/**
 * binary_tree_node - Create binary tree node
 * @parent: pointer to parent node
 * @value: value of a node
 * Return: pointer to binary tree node if successful otherwise NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node != NULL)
	{
		node->n = value;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
	}
	return (node);
}
