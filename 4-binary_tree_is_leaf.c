#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checking if a node is a leaf.
 *
 * @node: An address of the node to be checked.
 *
 * Return: 1 Success, Failure 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
