#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of a parent node.
 * @parent: pointer to the parent node.
 * @value: value to the node.
 *
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    if (parent == NULL)
        return (NULL);

    node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
        return (NULL);

    node->parent = parent;
    node->n = value;
    node->right = NULL;
    node->left = parent->left; 

    if (parent->left)
        parent->left->parent = node;
    parent->left = node;

    return (node);
}
