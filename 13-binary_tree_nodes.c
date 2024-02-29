#include "binary_trees.h"

/**
 * binary_tree_nodes - Measure the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node.
 * Return: nodes of a binary tree,
 * if tree is NULL return 0.
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
		return (0);

	nodes = binary_tree_nodes(tree->left);
	nodes = binary_tree_nodes(tree->right);

	return (nodes + nodes + (tree->left || tree->right));
}
