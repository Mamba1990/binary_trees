#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node.
 *
 * @parent: address of the parent of the node.
 * @value: The new node's value.
 *
 * Return: Failure - NULL , Success - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n;

	new_n = malloc(sizeof(binary_tree_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = value;
	new_n->parent = parent;
	new_n->left = NULL;
	new_n->right = NULL;

	return (new_n);
}
