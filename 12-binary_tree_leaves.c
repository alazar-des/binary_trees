#include "binary_trees.h"

/**
 * is_leaf - check if node is leaf
 * @node: node
 * Return: 1 if leaf, otherwise 0
 */
int is_leaf(const binary_tree_t *node)
{
	if (node == NULL ||
	    node->left != NULL ||
	    node->right != NULL)
		return (0);
	return (1);
}

/**
 * tree_leaves - count size of a binary tree with out the root tree
 * @tree: binary tree root node pointer
 * Return: size of tree
 */
size_t tree_leaves(const binary_tree_t *tree)
{
	size_t size_l, size_r;

	size_l = tree->left ?
		is_leaf(tree->left) + tree_leaves(tree->left) : 0;
	size_r = tree->right ?
		is_leaf(tree->right) + tree_leaves(tree->right) : 0;
	return (size_l + size_r);
}

/**
 * binary_tree_leaves - count size of a binary tree
 * @tree: binary tree root node pointer
 * Return: size of tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (tree_leaves(tree));
}
