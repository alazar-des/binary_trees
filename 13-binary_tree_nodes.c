#include "binary_trees.h"

/**
 * has_child - check if node is leaf
 * @node: node
 * Return: 1 if node has child, otherwise 0
 */
int has_child(const binary_tree_t *node)
{
	if (node != NULL &&
	    (node->left != NULL ||
	     node->right != NULL))
		return (1);
	return (0);
}

/**
 * tree_inner_nodes - count size of a binary tree with at least 1 child
 * @tree: binary tree root node pointer
 * Return: size of tree
 */
size_t tree_inner_nodes(const binary_tree_t *tree)
{
	size_t size_l, size_r;

	size_l = tree->left ?
		has_child(tree->left) + tree_inner_nodes(tree->left) : 0;
	size_r = tree->right ?
		has_child(tree->right) + tree_inner_nodes(tree->right) : 0;
	return (size_l + size_r);
}

/**
 * binary_tree_nodes - count size of a binary tree with at least 1 child
 * @tree: binary tree root node pointer
 * Return: size of tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL ||
	    (tree->left == NULL && tree->right == NULL))
		return (0);
	return (1 + tree_inner_nodes(tree));
}
