#include "binary_trees.h"

/**
 * binary_tree_nodes - Returns number of the nodes with at least 1 child.
 *
 * @tree: An address for the root node of the tree to count.
 *
 * Return: 0 - NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nd = 0;

	if (tree)
	{
		nd += (tree->left || tree->right) ? 1 : 0;
		nd += binary_tree_nodes(tree->left);
		nd += binary_tree_nodes(tree->right);
	}

	return (nd);
}
