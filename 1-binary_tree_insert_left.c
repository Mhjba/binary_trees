#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: A Pointer to the parent node of the node to create.
 * @value: The value to put in the new node.
 * Return: A pointer to the created node, or NULL on failure or if parent is
 * NULL
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;
	int tempVal;

	if (parent == NULL)
		return (NULL);

	if (!parent->left)
	{
		newNode = binary_tree_node(parent, value);
		parent->left = newNode;
		return (newNode);
	}

	newNode = binary_tree_node(parent->left, value);
	parent->left->left = newNode;

	tempVal = parent->left->left->n;
	parent->left->left->n = parent->left->n;
	parent->left->n = tempVal;

	return (newNode);
}
