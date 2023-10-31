#include "binary_trees.h"

/**
 * binary_tree_insert_right - Adds a node as the right child of other node.
 *
 * @parent: Address of  the node to be inserted in the right child.
 * @value: the new node's value to be stored.
 *
 * Return: Success -  pointer to the created node, Failure - NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *_new;

	if (parent == NULL)
		return (NULL);

	_new = binary_tree_node(parent, value);
	if (_new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		_new->right = parent->right;
		parent->right->parent = _new;
	}
	parent->right = _new;

	return (_new);
}
