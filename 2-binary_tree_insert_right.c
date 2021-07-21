#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as the right child of another node
 * @parent: parent binary tree node pointer
 * @value: value of the child node
 * Return: new node pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);
	if (node != NULL)
	{
		node->n = value;
		node->parent = parent;
		node->right = parent->right;
		node->left = NULL;
		if (parent->right != NULL)
			parent->right->parent = node;
		parent->right = node;
	}
	return (node);
}
