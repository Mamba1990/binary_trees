#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree);
int isPerfectRecursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
const binary_tree_t *getLeaf(const binary_tree_t *tree);
size_t _depth(const binary_tree_t *tree);
unsigned char isLeaf(const binary_tree_t *node);

/**
 * binary_tree_is_perfect - Checking if a binary tree is perfect.
 *
 * @tree: An address for the root node of the tree to be checked.
 *
 * Return: 0 - NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (isPerfectRecursive(tree, _depth(getLeaf(tree)), 0));
}

/**
 * _depth - determines the depth of a node in a binary tree.
 * @tree: An address of the node to measure the depth of.
 *
 * Return: The node's depth.
 */
size_t _depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + _depth(tree->parent) : 0);
}

/**
 * getLeaf - Returns a leaf of a binary tree.
 * @tree: An address for the node of the leaf searched.
 *
 * Return: An address for to the first encountered leaf.
 */
const binary_tree_t *getLeaf(const binary_tree_t *tree)
{
	if (isLeaf(tree) == 1)
		return (tree);
	return (tree->left ? getLeaf(tree->left) : getLeaf(tree->right));
}

/**
 * isPerfectRecursive - Checking if a binary tree is perfect recursively.
 * @tree: An address of the root node of the tree to be checked.
 * @leaf_depth: The one leaf's depth in the binary tree.
 * @level: current node's level.
 *
 * Return: Success 1, otherwise 0.
 */
int isPerfectRecursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (isLeaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (isPerfectRecursive(tree->left, leaf_depth, level + 1) &&
		isPerfectRecursive(tree->right, leaf_depth, level + 1));
}

/**
 * isLeaf - Checking if a node is a leaf.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf, 1, otherwise, 0.
 */
unsigned char isLeaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}
