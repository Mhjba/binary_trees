#include "binary_trees.h"
#include "limits.h"

/**
 * The is_bst_helper function determines whether a binary tree qualifies as a binary search tree.
 * @tree: A reference to the tree's root node for inspection.
 * @lo: The value of the smallest node visited thus far.
 * Hello: The biggest node's value that has been visited thus far.
 *
 * Return: 1 if the tree is a legitimate BST; 0 else.
 */
int is_bst_helper(const binary_tree_t *tree, int lo, int hi)
{
	if (tree != NULL)
	{
		if (tree->n < lo || tree->n > hi)
			return (0);
		return (is_bst_helper(tree->left, lo, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, hi));
	}
	return (1);
}

/**
 * Use binary_tree_is_bst to determine whether a binary tree qualifies as a binary search tree.
 * @tree: A reference to the tree's root node for inspection.
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
