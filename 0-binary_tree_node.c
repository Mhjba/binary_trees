#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: pointer to the parent node.
 * @value: value to the node.
 * Return: pointer, or null.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
