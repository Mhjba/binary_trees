#include "binary_trees.h"

/**
 * find_node - function to find a node in a tree
 * @root: root of the tree to evaluate
 * @node: node to find
 * Return: 1 if exists, 0 if not
 */
int find_node(binary_tree_t *root, binary_tree_t *node)
{
	if (root == NULL || node == NULL)
		return (0);
	if (node == root)
		return (1);
	return (node->n < root->n ? find_node(root->left, node) :
								find_node(root->right, node));
}

/**
 * cross_tree - recursively check if each node exists correctly
 * @root: root node of the tree
 * @node: current node to evaluate
 * Return: 1 if it is a BST, 0 if not
 */
int cross_tree(binary_tree_t *root, binary_tree_t *node)
{
	int aux = 0;

		aux = find_node(root, node);
		if (node->left && node->right)
			aux &= cross_tree(root, node->left) && cross_tree(root, node->right);
	return (aux);
}

/**
 * binary_tree_is_bst - check if ist a correctly bst tree
 * @tree: tre to check
 * Return: 1 if is bst 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (croos_tree((binary_tree_t *)tree, (binary_tree_t *)tree));
}
