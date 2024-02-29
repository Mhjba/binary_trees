#include "binary_trees.h"

/**
 * binary_tree_leaves - Measures the the leaves in a binary tree
 * @tree: pointer to the root node.
 * Return: leaves of a binary tree,
 * if tree is NULL return 0.
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leav = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	
	leav = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return(leav);
}
