#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of a parent node.
 * @parent: pointer to the parent node.
 * @value: value to the node.
 *
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    if (parent == NULL)
        return (NULL);

    node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
        return (NULL);

    node->parent = parent;
    node->n = value;
    node->left = NULL;
    node->right = parent->right;

    if (parent->right)
        parent->right->parent = node;
    parent->right = node;

    return (node);
}
