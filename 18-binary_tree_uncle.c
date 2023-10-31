#include "binary_trees.h"

/**
 * binary_tree_uncle - looks for the uncle of a node.
 *
 * @node: An address for the node to find the uncle.
 *
 * Return: NULL - node is NULL , node has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
