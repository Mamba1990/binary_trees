#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary by using tree post-order traversal.
 * @tree: An address for the root node of the tree to be traversed.
 * @func: An address for a funct to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
