#include "binary_trees.h"

/**
 * is_perfect - Helper function to check if a subtree is perfect.
 * @tree: pointer to the root node.
 * Return: size.
 */
int is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (is_perfect(tree->left) + 1 + is_perfect(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 1 if the tree is perfect,
 * 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	if (tree && (tree->left == NULL || tree->right == NULL))
		return (1);

	left_h = is_perfect(tree->left);
	right_h = is_perfect(tree->right);

	if ((left_h - right_h) == 0)
		return (1);

	return (0);
}
