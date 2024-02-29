#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Function that  rotates left the binary tree.
 * @tree: pointer to the root node.
 * Return: new root.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *n_root;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	n_root = tree->right;
	tree->right = n_root->left;
	if (tree->right != NULL)
	{
		tree->right->parent = tree;
	}
	n_root->left = tree;
	n_root->parent = tree->parent;
	tree->parent = n_root;

	return (n_root);
}
