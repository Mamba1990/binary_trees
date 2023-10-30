#include "binary_trees.h"

/**
 * binary_tree_is_root - Checking if a node is a root.
 *
 * @node: An address for the node to be checked.
 *
 * Return: 1 Susccess, Failure 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
