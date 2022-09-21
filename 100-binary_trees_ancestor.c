#include "binary_trees.h"
/**
 * binary_trees_ancestor - Finds the sibling of a node.
 * @node:  Pointer to the node to find the sibling.
 * Return: Pointer to the sibling node.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *f, *s;

	f = first;
	s = second
	if (!first || !second)
		return (NULL);
	if (first == second)
		return (NULL);
	while (f)
	{
		s = second
		while (s)
		{
			if (s == f)
				return (s->parent);
			s = s->parent;
		}
		f = f->parent;
	}	
	return (NULL);
}
