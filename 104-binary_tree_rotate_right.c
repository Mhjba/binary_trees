#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Function that  rotates right the binary tree.
 * @tree: pointer to the root node.
 * Return: new root.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *n_root;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	n_root = tree->left;
	tree->left = n_root->right;
	if (tree->left != NULL)
	{
		tree->left->parent = tree;
	}
	n_root->right = tree;
	n_root->parent = tree->parent;
	tree->parent = n_root;

	return (n_root);
}
