#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that checks an ancestor
 * @first: pointer to the first node.
 * @second: pointer to the second node.
 * Return: pointer, or null
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *f_node;
	binary_tree_t *s_node;

	if (first == NULL || second == NULL)
		return (NULL);
	f_node = (binary_tree_t *)first;

	while (f_node || s_node)
	{
		s_node = (binary_tree_t *)second;
		while (s_node)
		{
			if (f_node == s_node)
				return (f_node);
			s_node = s_node->parent;
		}
		f_node = f_node->parent;
	}
	return (NULL);
}
