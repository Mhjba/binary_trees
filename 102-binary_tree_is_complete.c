#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size of a binary tree.
 * @tree: pointer to the root node.
 * Return: Size of the tree,
 * or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size + 1);
}

/**
 * tree_is_complete - function of searche all binary tree nodes.
 * @tree: pointer to the root node.
 * @node: Pointer to tree's root
 * @n: size of the binary tree.
 * Return: 0, or 1.
 */
int tree_is_complete(const binary_tree_t *tree, size_t node, size_t n)
{
	if (tree == NULL)
		return (1);
	if (node >= n)
		return (0);
	return (tree_is_complete(tree->left, (2 * node) + 1, n) &&
			tree_is_complete(tree->right, (2 * node) + 2, n));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete.
 * @tree: pointer to the root node.
 * Return: 1, or 0.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;
	binary_tree_t *node;

	if (tree == NULL)
		return (0);

	node = (binary_tree_t *)tree;
	size = binary_tree_size(node);

	return (tree_is_complete(node, 0, size));
}
