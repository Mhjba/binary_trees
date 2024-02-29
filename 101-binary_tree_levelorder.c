#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: pointer to the root node.
 * Return: Height of the tree,
 * or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

			left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((left_h > right_h) ? left_h : right_h);

}
/**
 * add_from_level - add new node in each binary tree level.
 * @tree: pointer to the root node.
 * @func: pointer to a function node.
 * @level: level of binary tree to print.
 */
void add_from_level(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (tree == NULL || func == NULL)
		return;
	{
		if (level == 1)
			func(tree->n);
		else
		{
			add_from_level(tree->left, func, level - 1);
			add_from_level(tree->right, func, level - 1);
		}
	}

}

/**
 * binary_tree_levelorder - function the goes through a binary
 * tree using level-order traversal.
 * @tree: pointer to the root node.
 * @func: pointer to a function node.
 * Return: void.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height_level = 0;
	size_t level = 1;

	if (tree == NULL || func == NULL)
		return;
	{
		height_level = binary_tree_height(tree);
		while (level <= height_level + 1)
		{
			add_from_level(tree, func, level);
			level++;
		}
	}

}
