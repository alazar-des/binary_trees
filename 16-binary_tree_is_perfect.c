#include "binary_trees.h"

/**
 * tree_height - measure height of a binary tree
 * @tree: binary tree root node pointer
 * Return: height of a tree
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);
	height_l = tree->left ? 1 + tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + tree_height(tree->right) : 0;
	return (height_l >= height_r ? height_l : height_r);
}

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
 * bin_tree_leaves - count size of a binary tree
 * @tree: binary tree root node pointer
 * Return: size of tree
 */
size_t bin_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (tree_leaves(tree));
}

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: binary tree root node pointer
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, leaves, max_leaves = 1, i;

	if (tree == NULL)
		return (0);
	height = tree_height(tree);
	leaves = bin_tree_leaves(tree);
	for (i = 0; i < height; i++)
		max_leaves *= 2;
	return (max_leaves == leaves ? 1 : 0);
}
