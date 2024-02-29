#include "binary_trees.h"

/**
 * is_bst_helper - recursive helper to binary_tree_is_bst
 * @tree: pointer to the root node.
 * @node: pointer to integer.
 * Return: 1, or 0.
 */
int is_bst_helper (const binary_tree_t *tree, int *node)
{
	if (tree)
	{
		if (!is_bst_helper(tree->left, node))
			return (0);

		if (tree->n <= *node)
			return (0);
		*node = tree->n;

		return (is_bst_helper(tree->right, node));
	}

	return (1);
}

/**
 * binary_tree_is_bst - check if ist a correctly bst tree.
 * @tree: tree to check for BST
 * Return: 1 if is bst 0 if not.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper((binary_tree_t *)tree, (binary_tree_t *)tree));
}
