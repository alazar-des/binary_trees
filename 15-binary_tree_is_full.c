#include "binary_trees.h"

/**
 * tree_height - measure height of a binary tree
 * @tree: binary tree root node pointer
 * Return: height of a tree
 */
int tree_height(const binary_tree_t *tree)
{
	int height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);
	height_l = tree->left ? 1 + tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + tree_height(tree->right) : 0;
	return (height_l == height_r ? 0 : 1);
}

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: binary tree root node pointer
 * Return: left minus right tree height
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (tree == NULL)
		return (0);
	height_l = tree->left ? tree_height(tree->left) : -1;
	height_r = tree->right ? tree_height(tree->right) : -1;
	return (height_l == height_r ? 1 : 0);
}
