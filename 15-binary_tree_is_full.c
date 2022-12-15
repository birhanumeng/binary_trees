#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full
 * @tree: refers to the root node
 *
 * Return: 1 if is full, otherwise 0
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	if (!(binary_tree_is_leaf(tree)) && (tree->left == NULL || tree->right == NULL))
		return (0);
	if (!(binary_tree_is_full(tree->left)) || !(binary_tree_is_full(tree->right)))
		return (0);
	return (1);
}

/**
 * binary_tree_is_leaf - check if node is a leaf
 * @node: refers to a node.
 *
 * Return: 1 if leaf else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
