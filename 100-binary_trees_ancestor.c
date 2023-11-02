#include "binary_trees.h"

/**
 * binary_trees_ancestor - Looks for the lowest common ancestor of two nodes.
 *
 * @first: An address of the 1st  node.
 * @second: An address of  the 2nd node.
 *
 * Return: An address of lowest ancetor, NULL otherwise.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *momy, *popy;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	momy = first->parent, popy = second->parent;
	if (first == popy || !momy || (!momy->parent && popy))
		return (binary_trees_ancestor(first, popy));
	else if (momy == second || !popy || (!popy->parent && momy))
		return (binary_trees_ancestor(momy, second));

	return (binary_trees_ancestor(momy, popy));
}
