#include "binary_trees.h"

/**
 * binary_tree_leaves - Returns the nimber of the leaves in a binary tree.
 *
 * @tree: An address to the root node of the tree.
 *
 * Return: 0 NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lv = 0;

	if (tree)
	{
		lv += (!tree->left && !tree->right) ? 1 : 0;
		lv += binary_tree_leaves(tree->left);
		lv += binary_tree_leaves(tree->right);
	}

	return (lv);
}
