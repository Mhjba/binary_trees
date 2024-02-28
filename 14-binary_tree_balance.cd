#include "binary_trees.h"

/** 
 * binary_tree_height: A function to calculate a binary tree's height 
 * Return: the height, or 0 if the tree is null. @tree: VAR1 tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree)
	{
		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}

/**
 * binary_tree_balance - function that Measures balance factor of a binary tree
 * @tree: VAR1 tree
 * Return: balanced factor or 0 if null
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
