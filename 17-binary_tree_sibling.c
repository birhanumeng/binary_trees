#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: refers to a node to find the sibling of
 *
 * Return: pointer to the sibling otherwise NULL
 *         if has no sibling or parent is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
