#include "binary_trees.h"

/**
 * binary_tree_insert_left - Adds a node as the left child of other node.
 *
 * @parent: Address of  the node to be inserted in the left child.
 * @value: the new node's value to be stored.
 *
 * Return: Success -  pointer to the created node, Failure - NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *_new;

	if (parent == NULL)
		return (NULL);

	_new = binary_tree_node(parent, value);
	if (_new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		_new->left = parent->left;
		parent->left->parent = _new;
	}
	parent->left = _new;

	return (_new);
}
