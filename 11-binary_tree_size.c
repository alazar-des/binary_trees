#include "binary_trees.h"

/**
 * tree_size - count size of a binary tree with out the root tree
 * @tree: binary tree root node pointer
 * Return: size of tree
 */
size_t tree_size(const binary_tree_t *tree)
{
	size_t size_l, size_r;

	size_l = tree->left ? 1 + tree_size(tree->left) : 0;
	size_r = tree->right ? 1 + tree_size(tree->right) : 0;
	return (size_l + size_r);
}
/**
 * binary_tree_size - count size of a binary tree
 * @tree: binary tree root node pointer
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + tree_size(tree));
}
