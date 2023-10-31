#include "binary_trees.h"

/**
 * binary_tree_size - Returns the binary tree's size.
 *
 * @tree: An address to the root node.
 *
 * Return: 0 - NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree)
	{
		s += 1;
		s += binary_tree_size(tree->left);
		s += binary_tree_size(tree->right);
	}

	return (s);
}
