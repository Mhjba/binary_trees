#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size of a binary tree.
 * @tree: pointer to the root node.
 *
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
