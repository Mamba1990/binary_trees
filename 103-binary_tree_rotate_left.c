#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Operates a left rotation on a binary tree.
 *
 * @tree: An address of the root node of the tree to be  rotated.
 *
 * Return: An Address for the new root node of the rotated tree.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{

	binary_tree_t *piv, *t;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	piv = tree->right;
	t = piv->left;
	piv->left = tree;
	tree->right = t;
	if (t != NULL)
		t->parent = tree;
	t = tree->parent;
	tree->parent = piv;
	piv->parent = t;
	if (t != NULL)
	{
		if (t->left == tree)
			t->left = piv;
		else
			t->right = piv;
	}

	return (piv);
}
