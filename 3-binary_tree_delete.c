#include "binary_trees.h"

/**
 * binary_tree_delete - delete entire tree
 * @tree: root binary tree node pointer
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
	tree = NULL;
}
