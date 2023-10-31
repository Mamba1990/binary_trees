#include "binary_trees.h"

/**
 * binary_tree_sibling - looks for the sibling of a node.
 *
 * @node: An address the node to find the sibling.
 *
 * Return: NULL - node is NULL , parent is NULL , node has no sibiling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
