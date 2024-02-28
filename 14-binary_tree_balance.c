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

			left_h = tree->left ? 1 + binary_tree_height(tree->left) : 1;
			right_h= tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((left_h > right_h) ? left_h : right_h);

}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: pointer to the root node.
 * Return: balance factor of a binary tree,
 * if tree is NULL return 0.
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
    int cournt, cournt1;

	if (tree == NULL)
		return (0);

	cournt = binary_tree_height(tree->left);
    cournt1 = binary_tree_height(tree->right);

    return(cournt - cournt1);
}
